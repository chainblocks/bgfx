static const uint8_t fs_imgui_image_swizz_glsl[377] =
{
	0x46, 0x53, 0x48, 0x02, 0x6f, 0x1e, 0x3e, 0x3c, 0x03, 0x00, 0x0a, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x09, 0x75, 0x5f, 0x73, 0x77, // geLod.......u_sw
	0x69, 0x7a, 0x7a, 0x6c, 0x65, 0x07, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, // izzle.......u_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x38, 0x01, 0x00, 0x00, // xColor......8...
	0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, // varying mediump
	0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // vec2 v_texcoord0
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, // ;.uniform medium
	0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, // p float u_imageL
	0x6f, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x65, 0x64, 0x69, // od;.uniform medi
	0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x73, 0x77, 0x69, 0x7a, 0x7a, // ump vec4 u_swizz
	0x6c, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, // le;.uniform samp
	0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ler2D u_texColor
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, // .  lowp vec4 tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_1;.  tmpvar_
	0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 1.w = 1.0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, // var_1.xyz = vec3
	0x28, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x4c, // (dot (texture2DL
	0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // od    (u_texColo
	0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2c, 0x20, // r, v_texcoord0,
	0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x29, 0x2c, 0x20, 0x75, 0x5f, 0x73, // u_imageLod), u_s
	0x77, 0x69, 0x7a, 0x7a, 0x6c, 0x65, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, // wizzle));.  gl_F
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ragColor = tmpva
	0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // r_1;.}...
};
static const uint8_t fs_imgui_image_swizz_dx9[410] =
{
	0x46, 0x53, 0x48, 0x02, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x14, 0x01, 0x00, 0x00, 0x01, 0x00, 0x09, 0x75, 0x5f, 0x73, 0x77, // geLod.......u_sw
	0x69, 0x7a, 0x7a, 0x6c, 0x65, 0x15, 0x01, 0x01, 0x00, 0x01, 0x00, 0x6c, 0x01, 0x00, 0x03, 0xff, // izzle......l....
	0xff, 0xfe, 0xff, 0x3a, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, // ...:.CTAB.......
	0x00, 0x00, 0x03, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, // ................
	0x00, 0xac, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .....X..........
	0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, // .d.......t......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, // ................
	0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x00, 0xab, 0x00, 0x00, 0x03, // .u_imageLod.....
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x73, // .............u_s
	0x77, 0x69, 0x7a, 0x7a, 0x6c, 0x65, 0x00, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, // wizzle..........
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .........u_texCo
	0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, // lor.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, // hader Compiler 9
	0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, // .29.952.3111.Q..
	0x05, 0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........?.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x00, 0x00, 0x03, // ................
	0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, 0x05, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x07, 0x80, 0x02, 0x00, 0xd0, 0xa0, 0x00, 0x00, 0xc4, 0x90, 0x01, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x5f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // ........._......
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, 0x00, 0x08, 0x07, // ................
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, // ................
	0x80, 0x02, 0x00, 0x00, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t fs_imgui_image_swizz_dx11[1383] =
{
	0x46, 0x53, 0x48, 0x02, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x14, 0x00, 0x24, 0x0a, 0x01, 0x00, 0x09, 0x75, 0x5f, 0x73, 0x77, // geLod..$....u_sw
	0x69, 0x7a, 0x7a, 0x6c, 0x65, 0x15, 0x00, 0x30, 0x0a, 0x01, 0x00, 0x28, 0x05, 0x44, 0x58, 0x42, // izzle..0...(.DXB
	0x43, 0x41, 0xc5, 0x55, 0xf9, 0x51, 0xc7, 0x7f, 0x80, 0x35, 0xb0, 0x72, 0x98, 0x69, 0xc6, 0x28, // CA.U.Q...5.r.i.(
	0x1c, 0x01, 0x00, 0x00, 0x00, 0x28, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, // .....(.......4..
	0x00, 0x5c, 0x03, 0x00, 0x00, 0xb4, 0x03, 0x00, 0x00, 0xe8, 0x03, 0x00, 0x00, 0xac, 0x04, 0x00, // ................
	0x00, 0x52, 0x44, 0x45, 0x46, 0x20, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, // .RDEF ..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x04, 0xff, 0xff, 0x00, 0x91, 0x00, // ................
	0x00, 0xed, 0x02, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....|..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x0d, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, // .....u_texColorS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // ampler.u_texColo
	0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, // rTexture.$Global
	0x73, 0x00, 0xab, 0xab, 0xab, 0xa0, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, // s...............
	0x00, 0x40, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x02, 0x00, // .@..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, // ............. ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .....0..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x00, // ..... .......<..
	0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, // . ...@.......D..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x02, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .....T...`...@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x02, 0x00, // .....D.......^..
	0x00, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, // .....@.......D..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x02, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // .....e.......@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0x02, 0x00, // .....D.......o..
	0x00, 0x20, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, // . ...@.......D..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x02, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, // .....z...`...@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x02, 0x00, // .....D..........
	0x00, 0xa0, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x02, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x40, 0x00, 0x00, // .............@..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x02, 0x00, // .....D..........
	0x00, 0xe0, 0x09, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, // .....@.......D..
	0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x02, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x04, 0x00, 0x00, // ......... ......
	0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x02, 0x00, // ................
	0x00, 0x24, 0x0a, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xc8, 0x02, 0x00, // .$..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0xe3, 0x02, 0x00, 0x00, 0x30, 0x0a, 0x00, 0x00, 0x10, 0x00, 0x00, // .........0......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, // ..... .......u_v
	0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, // iewRect.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, // .........u_viewT
	0x65, 0x78, 0x65, 0x6c, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0xab, 0x03, 0x00, 0x03, // exel.u_view.....
	0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, // .............u_i
	0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, // nvView.u_proj.u_
	0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, // invProj.u_viewPr
	0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, // oj.u_invViewProj
	0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, // .u_model........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, // . .......u_model
	0x56, 0x69, 0x65, 0x77, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, // View.u_modelView
	0x50, 0x72, 0x6f, 0x6a, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x00, // Proj.u_alphaRef.
	0xab, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x00, 0x75, 0x5f, 0x73, 0x77, // .u_imageLod.u_sw
	0x69, 0x7a, 0x7a, 0x6c, 0x65, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, // izzle.Microsoft
	0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, // (R) HLSL Shader
	0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x32, 0x39, 0x2e, 0x39, 0x35, // Compiler 9.29.95
	0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0xab, 0xab, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, // 2.3111...ISGNP..
	0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........8......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // .D..............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, // .........SV_POSI
	0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, // TION.TEXCOORD...
	0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .OSGN,..........
	0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // . ..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, // .........SV_TARG
	0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xbc, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // ET...SHDR....@..
	0x00, 0x2f, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, // ./...Y...F. ....
	0x00, 0xa4, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, // .....Z....`.....
	0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, // .X....p......UU.
	0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .b...2.......e..
	0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, // .. ......h......
	0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, // .H...........F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x00, 0x00, // ....... ........
	0x00, 0x11, 0x00, 0x00, 0x08, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .....r ......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, // .....F. ........
	0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, // .6.... .......@.
	0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, 0x74, 0x00, 0x00, // ....?>...STATt..
	0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0a,                                                       // .....@.
};
