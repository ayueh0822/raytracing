#ifndef __RAYTRACING_H
#define __RAYTRACING_H

#include "objects.h"
#include <stdint.h>

typedef struct MUTUAL_THREAD_ARGUMENT{
	uint8_t *pixels;
	double* background_color;
             rectangular_node rectangulars;
             sphere_node spheres;
             light_node lights;
             const viewpoint *view;
             int width ;
             int height;
             double* u;
             double* v;
             double* w;
} mutual_arg ;

typedef struct THREAD_ARGUMENT{
	mutual_arg * mutual;
	int height_start;
	int height_end;
} thread_arg;

void raytracing(uint8_t *pixels, color background_color,
                rectangular_node rectangulars, sphere_node spheres,
                light_node lights, const viewpoint *view,
                int width, int height);
#endif
