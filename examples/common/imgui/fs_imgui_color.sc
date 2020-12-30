$input v_color0

/*
 * Copyright 2011-2020 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx#license-bsd-2-clause
 */

#include <bgfx_shader.sh>

void main()
{
	// !! chainblocks !!
	// alright, imgui gives us sRGB, but we want to work in linear
	// as we have a sRGB backbuffer and require sRGB textures as well
	vec3 sRGB = v_color0.xyz;
	vec3 RGB = sRGB * (sRGB * (sRGB * 0.305306011 + 0.682171111) + 0.012522878);
	gl_FragColor = vec4(RGB, v_color0.w);
}
