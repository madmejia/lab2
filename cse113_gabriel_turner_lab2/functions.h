/**
 * @file functions.h
 *
 * @author Gabe Turner
 *
 * @date 9/12/2021
 *
 * Assignment: Lab 2
 *
 * @brief header file for functions.c
 *
 * @details see functions.c for details
 *
 * @bugs none
 *
 * @todo none
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/* You may need #include <> statements here */

/* Function prototyes go here */
int area_rectangle(int h, int w);
int perimeter_rectangle(int l, int w);
double diagonal_rectangle(int l, int w);
double area_circle(double r);
double circumference(double r);
double area_triangle(double h,double w);
double hypotenuse_triangle(double h, double w);
double perimeter_triangle(double h, double w, double hyp);
double exterior_angle(int sides);
double interior_angle(int sides);
double area_regular_polygon(double side_length, int sides);
double angle(int sides);
#endif
