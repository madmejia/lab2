/**
 * @file functions.c
 *
 * @author Madison Mejia
 *
 * @date 2/9/2022
 *
 * Assignment: Lab 2
 *
 * @brief contains the function definitions for lab 2
 *
 * @details functions (not the main function) from lab 1 have been copied
 * into this file to use them for lab 2
 *
 * @bug none
 * 
 * @todo none
 */

#include "functions.h"
#include <stdio.h>
#include <math.h>

/**
 * Multiplies two integers to output a rectangle's area
 * @param rect_height the multiplicand
 * @param rect_width the multiplier
 * @return the product rect_height * rect_width
 */
double area_rectangle(int rect_height, int rect_width)
{
        return rect_height * rect_width;
}

/**
 * Multiplies two integers and adds the products to output a 
 * rectangle's perimeter
 * @param rect_height the first multiplicand
 * @param rect_width the second multiplicand
 * @return the sum of the two products 2 * rect_height and 2 * rect_width
 */
double perimeter_rectangle(int rect_height, int rect_width)
{
        return 2 * rect_height + 2 * rect_width;
}

/**
 * Square roots the sum of two integer products to output a 
 * rectangle's diagonal
 * @param rect_height 
 * @param rect_width 
 * @return the product of the square root of rect_height + rect_width 
 * both raised to the power of 2
 */
double diagonal_rectangle(int rect_height, int rect_width)
{

        return sqrt(pow(rect_height, 2) + pow(rect_width, 2));
}

/**
 * Multiplies floating point value product by an estimate of pi
 * to output the area of a circle
 * @param r the multiplicand
 * @return the product 3.141593 * r to the power of 2
 */
double area_circle(double r)
{
        return 3.141593 * pow(r, 2); 
}

/**
 * Multiplies floating point value to output a circle's circumference
 * @param r 
 * @return the product 2 * 3.131593 * r
 */
double circumference(double r)
{
         return 2 * 3.141593 * r;
}

/**
 * Multiplies three floating point values to output the area of 
 * a triangle
 * @param tri_height 
 * @param tri_base 
 * @return 0.5 * tri_height * tri_base 
 */
double area_triangle(double tri_height, double tri_base)
{
        return 1.0 / 2.0 * tri_height * tri_base;
}

/**
 * Takes the square root of the sum of two floating point
 * value products to output the hypotenuse of a triangle
 * @param tri_height 
 * @param tri_base 
 * @return the product of the sum tri_height + tri_base to
 * the half power where each param is raised to the power of 2 
 */
double hypotenuse(double tri_height, double tri_base)
{
        return sqrt(pow(tri_height, 2) + pow(tri_base, 2));
}

/**
 * Adds three floating point values together to output the perimeter
 * of a triangle
 * @remarks One floating point value is returned from the product of the 
 * other two floating point values being used in the hypotenuse function
 * @param tri_height 
 * @param tri_base 
 * @return the sum hypotenuse(tri_height, tri_base) + tri_height + tri_base 
 */
double perimeter_triangle(double tri_height, double tri_base)
{
        return hypotenuse(tri_height, tri_base) + tri_height + tri_base;
}

/**
 * Divides a floating point value and integer to output regular polygon
 * exterior angle
 * @param n_sides 
 * @return the quotient 360.0 / n_sides
 */
double exterior_angle(int n_sides)
{
        return 360.0 / n_sides;
}

/**
 * @Divides the product of a floating point value and integer  
 * to output regular polygon interior angle
 * @param n_sides 
 * @return the quotient (180.0 * (n_sides -2)) / n_sides
 */
double interior_angle(int n_sides)
{
        return 180.0 * (n_sides - 2) / n_sides;
}

/**
 * Divides floating point values to output the area of a 
 * regular polygon
 * @param n_sides 
 * @param side_length 
 * @return quotient involving side_length and n_sides
 */
double area_regular_polygon(int n_sides, double side_length)
{
        return pow(side_length, 2) * n_sides / (4 * tan(3.141593 / n_sides));
}