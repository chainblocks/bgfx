#!/bin/bash

# Windows detection
if uname | grep -qiE "mingw|msys"; then
  MAKE="mingw32-make"
else
  MAKE="make"
fi

# regex out of linux config:

sed -i 's/ -mfpmath=sse -msse2//g' bx.make
sed -i 's/ -mfpmath=sse -msse2//g' fcpp.make
sed -i 's/ -mfpmath=sse -msse2//g' glslang.make
sed -i 's/ -mfpmath=sse -msse2/ -fno-strict-aliasing/g' glsl-optimizer.make
sed -i 's/ -mfpmath=sse -msse2//g' spirv-opt.make
sed -i 's/ -mfpmath=sse -msse2//g' spirv-cross.make
sed -i 's/ -mfpmath=sse -msse2//g' shaderc.make

sed -i 's/ -Wl,--as-needed//g' bx.make
sed -i 's/ -Wl,--as-needed//g' fcpp.make
sed -i 's/ -Wl,--as-needed//g' glslang.make
sed -i 's/ -Wl,--as-needed//g' glsl-optimizer.make
sed -i 's/ -Wl,--as-needed//g' spirv-opt.make
sed -i 's/ -Wl,--as-needed//g' spirv-cross.make
sed -i 's/ -Wl,--as-needed//g' shaderc.make

sed -i 's/ -Wlogical-op//g' bx.make
sed -i 's/ -Wlogical-op//g' fcpp.make
sed -i 's/ -Wlogical-op//g' glslang.make
sed -i 's/ -Wlogical-op//g' glsl-optimizer.make
sed -i 's/ -Wlogical-op//g' spirv-opt.make
sed -i 's/ -Wlogical-op//g' spirv-cross.make
sed -i 's/ -Wlogical-op//g' shaderc.make

if uname | grep -qiE "mingw|msys"; then
  sed -i 's/shadercRelease.exe/shadercRelease.wasm/g' shaderc.make
  sed -i 's/shadercDebug.exe/shadercDebug.wasm/g' shaderc.make
else
  sed -i 's/shadercRelease/shadercRelease.wasm/g' shaderc.make
  sed -i 's/shadercDebug/shadercDebug.wasm/g' shaderc.make
fi

sed -i 's/$(SILENT) strip -s "$(TARGET)"//g' shaderc.make

sed -i 's/-O3/-Os/g' bx.make
sed -i 's/-O3/-Os/g' fcpp.make
sed -i 's/-O3/-Os/g' glslang.make
sed -i 's/-O2/-Os/g' glsl-optimizer.make
sed -i 's/-O3/-Os/g' spirv-opt.make
sed -i 's/-O3/-Os/g' spirv-cross.make
sed -i 's/-O3/-Os/g' shaderc.make

# BUILD_TYPE=debug32
BUILD_TYPE=release32

USE_LTO=-flto
# USE_LTO=
OPT_LEVEL=
STRIP_LEVEL=-Wl,--strip-all

if [ $BUILD_TYPE = "debug32" ]; then
  USE_LTO=
  OPT_LEVEL=-O1
  STRIP_LEVEL=
fi

ARCH="--target=wasm32-wasi --sysroot=$WASISDK/share/wasi-sysroot $USE_LTO"
DEFINES="-DBX_CONFIG_SUPPORTS_THREADING=0 -D__WASI__=1 -DBGFX_CONFIG_MULTITHREADED=0 -DYYDEBUG=0 $OPT_LEVEL"
JOBS=`nproc --all`

$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $DEFINES" bx
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $DEFINES" fcpp
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $DEFINES" glslang
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $DEFINES" glsl-optimizer
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $DEFINES" spirv-opt
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $DEFINES" spirv-cross
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $STRIP_LEVEL -Wl,-z,stack-size=1048576 $DEFINES" shaderc
