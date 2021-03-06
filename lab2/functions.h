/**
 * @file functions.h
 *
 * @author Madison Mejia
 *
 * @date 2/9/2022
 *
 * Assignment: Lab 2
 *
 * @brief header file for functions.c
 *
 * @details see functions.c for details
 *
 * @bug none
 *
 * @todo none
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <math.h>

/* Function prototyes go here */
double area_rectangle(int rect_height, int rect_width);
double perimeter_rectangle(int rect_height, int rect_width);
double diagonal_rectangle(int rect_height, int rect_width);
double area_circle(double r);
double circumference(double r);
double area_triangle(double tri_height, double tri_base);
double hypotenuse(double tri_height, double tri_base);
double perimeter_triangle(double tri_height, double tri_base);
double exterior_angle(int n_sides);
double interior_angle(int n_sides);
double area_regular_polygon(int n_sides, double side_length);

#endif
