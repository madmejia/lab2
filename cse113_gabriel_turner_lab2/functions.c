/**
 * @file functions.c
 *
 * @author Gabe Turner
 *
 * @date 9/12/20
 *
 * Assignment: Lab 2
 *
 * @brief contains the function definitions for lab 2
 *
 * @details Copy your functions (not the main function) from lab 1 into this file
 * so that you use them for lab 2
 *
 * @bugs none
 *
 * @todo none
 */

#include "functions.h"
#include <stdio.h>
#include <math.h>

/* Your functions go here */

/**
* Finds the area of a rectangle
* @param h The height of the rectangle
* @param w The width of the rectangle
* @return The product (h * w)
*/
int area_rectangle(int h, int w)
{
        return (h * w);
}

/**
 * Finds the perimeter of a rectangle 
 * @param h The height of the rectangle
 * @param w the width of the rectangle
 * @return The value of all sides added together or (2h + 2w)
 */
int perimeter_rectangle(int h, int w)
{
    return (2 * h) + (2 * w);
}

/**
 *find the diagonal of the rectangle by taking the square of each side
 *then adding them and finding the square root of that
 *@param h height of rectangle
 *@param w width of rectangle
 *@return the hypotenuse sqrt((h^2) + (w^2))
*/
double diagonal_rectangle(int h, int w)
{
    return sqrt(pow(h, 2) + pow(w, 2));
}

/**
 *multiplies pi by the square of the radius to find the area
 *@param r radius of circle
 *@return the product (pi * r^2)
*/
double area_circle(double r)
{
    return 3.141593 * pow(r, 2);
}

/**
 *multiplies pi by the diameter which is radius * 2
 *@param r radius of circle
 *@return the product (pi * 2r) or (pi * diameter)
*/
double circumference(double r)
{
    return 3.141593 * 2 * r;
}

/**
 *multiplies the sides of the triangle then divides that by 2
 *@param h height of triangle
 *@param w width of triangle
 *@return the product (0.5 * h * w) 
*/
double area_triangle(double h, double w)
{
    return (h * w) / 2;
}

/**
 *takes the square root of the sum of each side to the second power
 *@param h height of rectangle
 *@param w width of rectangle
 *@return the hypotenuse sqrt(h^2 + w^2)
*/
double hypotenuse_triangle(double h, double w)
{
    return sqrt(pow(h, 2) + pow(w, 2));
}

/**
 *adds all 3 sides of the rectangle
 *@param h height of rectangle
 *@param w width of rectangle
 *@param hyp hypotenuse
 *@return sum (h + w + hypotenuse)
*/
double perimeter_triangle(double h, double w, double hyp)
{
    return h + w + hyp;
}

/**
 *divides 360 degrees by the amount of sides to find an interior angle
 *@param sides amount of sides in the polygon
 *@
*/
double interior_angle(int sides)
{
    return 360 / sides;
}

/**
 *finds the total exterior angle by multiplying 180 by the amount of sides - 2
 *@param sides amount of sides in the polygon
*/
double exterior_angle(int sides)
{
    return 180 * (sides - 2);
}

/**
 *takes the answer from the previous equation and divides it by
 *the amount of sides. This finds a singular exterior angle.
 *@param sides amount of sides in the polygon
*/
double angle(int sides)
{
    return (180 * (sides - 2)) / sides;
}
/**
 *uses the equation to find the area of a polygon based on knowing the side
 *length and the amount of sides.
 *@param sides amount of sides in the polygon
 *@param side_length the length of each side
*/
double area_regular_polygon(double side_length, int sides)
{
    return (pow(side_length, 2) * sides) / (4 * tan(3.141593 / sides));
}


