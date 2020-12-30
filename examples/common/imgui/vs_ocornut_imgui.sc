$input a_position, a_texcoord0, a_color0
$output v_color0, v_texcoord0

#include "../common.sh"

void main()
{
	vec2 pos = 2.0*a_position.xy*u_viewTexel.xy;
	gl_Position = vec4(pos.x - 1.0, 1.0 - pos.y, 0.0, 1.0);
	v_texcoord0 = a_texcoord0;
	// !! chainblocks !!
	// alright, imgui gives us sRGB, but we want to work in linear
	// as we have a sRGB backbuffer and require sRGB textures as well
	vec3 sRGB = a_color0.xyz;
	vec3 RGB = sRGB * (sRGB * (sRGB * 0.305306011 + 0.682171111) + 0.012522878);
	v_color0 = vec4(RGB, a_color0.w);
}
