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
sed -i 's/ -mfpmath=sse -msse2//g' glsl-optimizer.make
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

sed -i 's/.exe/.wasm/g' shaderc.make
sed -i 's/$(SILENT) $(STRIP) -s "$(TARGET)"//g' shaderc.make

sed -i 's/-O3/-Os/g' bx.make
sed -i 's/-O3/-Os/g' fcpp.make
sed -i 's/-O3/-Os/g' glslang.make
sed -i 's/-O3/-Os/g' glsl-optimizer.make
sed -i 's/-O3/-Os/g' spirv-opt.make
sed -i 's/-O3/-Os/g' spirv-cross.make
sed -i 's/-O3/-Os/g' shaderc.make

# BUILD_TYPE=debug32
BUILD_TYPE=release32

USE_LTO=-flto
OPT_LEVEL=
STRIP_LEVEL=-Wl,--strip-all

if [ $BUILD_TYPE = "debug32" ]; then
  USE_LTO=
  OPT_LEVEL=-O1
  STRIP_LEVEL=
fi

ARCH="--target=wasm32-wasi --sysroot=$WASISDK/share/wasi-sysroot $USE_LTO -Wl,-z,stack-size=1048576"
DEFINES="-DBX_CONFIG_SUPPORTS_THREADING=0 -D__WASI__=1 -DENABLE_HLSL=1 -DENABLE_OPT=1 -DSPIRV_CROSS_EXCEPTIONS_TO_ASSERTIONS=1 -DBGFX_CONFIG_MULTITHREADED=0 $OPT_LEVEL"
JOBS=`nproc --all`

$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH" DEFINES="$DEFINES" bx
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH" DEFINES="$DEFINES" fcpp
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH" DEFINES="$DEFINES" glslang
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH" DEFINES="$DEFINES" glsl-optimizer
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH" DEFINES="$DEFINES" spirv-opt
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH" DEFINES="$DEFINES" spirv-cross
$MAKE config=$BUILD_TYPE -j$JOBS CC="$WASISDK/bin/clang" AR="$WASISDK/bin/ar" CXX="$WASISDK/bin/clang++" ARCH="$ARCH $STRIP_LEVEL" DEFINES="$DEFINES" shaderc
