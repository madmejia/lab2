/**
 * @file lab2.c
 *
 * @author Gabriel Turner
 *
 * @date 9/12/2021
 *
 * Assignment: Lab 2
 *
 * @brief A program that uses the function in functions.c
 *
 * @details this uses a series of switch statements to decide what geometrical equation the user
 * wants. These switch statements first decide the shape and then the equation that is wanted with
 * that shape. With this, it then asks the user to input the variables needed for the code and then
 * returns the answer to the question. This uses a header file to hold all the functions that we used
 * in lab 1 that way we can use it here.
 *
 * @bug none
 *
 * @todo none
 */
/*header file*/
#include "functions.h"
#include <stdio.h>
#include <math.h>


int main(void) {
	/*variable*/
    int rect_h;
    int rect_w;
    double r;
	double tri_h;
	double tri_w;
    int sides;
    double side_length;
    double answer;
	int choice, tmp;

	/*basically just prompts the user to select a shape and saves its input*/
	printf("Select shape\n");
	printf("R. Rectangle\n");
	printf("C. Circle\n");
	printf("T. Triangle\n");
	printf("P. Polygon\n");
	printf("Make choice (R, C, T, P): ");
	while ((tmp = getchar()) != '\n')
	choice = tmp;
	
	/**
	 * this asks the user to pick between a rectangle, circle, triangle, and polygon
	 * based on there choice it goes into another switch statement
	 * this second switch asks them which of the equations they want to use based on the shape
	 * this will then prompt the user to input the needed variables to solve the equation
	 * with this then it uses the required equation and prints the value of it
	*/ 
	switch(choice) {
	case 'R': case 'r':
		printf("select equation\n");
		printf("A. area\n");
		printf("P. perimeter\n");
		printf("D. diagonal\n");
		printf("Make choice (A, P, D): ");
		while ((tmp = getchar()) != '\n')
		choice = tmp;
		switch(choice) {
		case 'A': case 'a':
			printf("input height and width: ");
			scanf("%d %d", &rect_h, &rect_w);
			if (rect_h <= 0 || rect_w <= 0){
        		printf("negative value do not exist\n");
			}else {
				answer = area_rectangle(rect_h, rect_w);
    			printf("A rectangle with height %d and width %d has an area of %lf.\n", rect_h, rect_w, answer);
			}
			break;
		case 'P': case 'p':
			printf("input height and width: ");
			scanf("%d %d", &rect_h, &rect_w);
			if (rect_h <= 0 || rect_w <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer = perimeter_rectangle(rect_h, rect_w);
    			printf("perimeter of rectangle with sides of %d and %d is %lf\n", rect_h, rect_w, answer);
			}
			break;
		case 'D': case 'd':
			printf("input height and width: ");
			scanf("%d %d", &rect_h, &rect_w);
			if (rect_h <= 0 || rect_w <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer = diagonal_rectangle(rect_h, rect_w);
    			printf("diagonal of rectangle with sides of %d and %d is %lf\n", rect_h, rect_w, answer);
			}
			break;
		default:
			printf("unknown equation try again\n");
		}
		break;
	case 'C': case 'c':
		printf("select equation\n");
		printf("A. area\n");
		printf("C. circumference\n");
		printf("Make choice (A, C): ");
		while ((tmp = getchar()) != '\n')
		choice = tmp;
		switch(choice) {
		case 'A': case 'a':
			printf("enter circles radius:  ");
    		scanf("%lf", &r);
			if (r <= 0){
        		printf("negative value do not exist\n");
			}else {
				answer = area_circle(r);
    			printf("area of circle with radius %lf is %lf\n", r, answer);
			}
			break;
		case 'C': case 'c':
			printf("enter circles radius:  ");
	    	scanf("%lf", &r);
			if (r <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer = circumference(r);
    			printf("circumference of circle with radius %lf is %lf\n", r, answer);
			}
			break;
		default:
			printf("unknown equation try again\n");	
		}
		break;
	case 'T': case 't':	
		printf("select equation\n");
		printf("A. area\n");
		printf("P. perimeter\n");
		printf("Make choice (A, P): ");
		while ((tmp = getchar()) != '\n')
		choice = tmp;
		switch(choice) {
		case 'A': case 'a':
			printf("enter triangle side lengths:  ");
    		scanf("%lf %lf", &tri_h, &tri_w);
			if (tri_h <= 0 || tri_w <= 0){
        		printf("negative value do not exist\n");
			}else {
				answer = area_triangle(tri_h, tri_w);
    			printf("area of triangle with sides of %lf and %lf is %lf\n",tri_h, tri_w, answer);
			}
			break;
		case 'P': case 'p':
			printf("enter triangle side lengths:  ");
		    scanf("%lf %lf", &tri_h, &tri_w);
			if (tri_h <= 0 || tri_w <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer = perimeter_triangle(tri_h, tri_w, hypotenuse_triangle(tri_h, tri_w));
    			printf("perimeter of triangle with sides of %lf and %lf is %lf\n",tri_h, tri_w, answer);
			}
			break;
		default:
			printf("unknown equation try again\n");
		}
		break;
	case 'P': case 'p':
		printf("select equation\n");
		printf("I. Interior angle\n");
		printf("E. Exterior Angle\n");
		printf("V. Average Interior Angle\n");
		printf("A. Area");
		printf("Make choice (I, E, V, A): ");
		while ((tmp = getchar()) != '\n')
		choice = tmp;
		switch(choice) {
		case 'I': case 'i':
			printf("enter the amount of sides in polygon:  ");
    		scanf("%d", &sides);
			if (sides <= 0){
        		printf("negative value do not exist\n");
			}else {
				answer = interior_angle(sides);
				printf("Int angle of the polygon with %d sides is %lf\n",sides, answer);
			}
			break;
		case 'E': case 'e':
			printf("enter the amount of sides in polygon:  ");
    		scanf("%d", &sides);
			if (sides <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer =  exterior_angle(sides);
    			printf("Ext angle of the polygon with %d sides is %lf\n",sides, answer);
			}
			break;
		case 'V': case 'v':
			printf("enter the amount of sides in polygon:  ");
    		scanf("%d", &sides);
			if (sides <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer = angle(sides);
    			printf("each interior angle of a %d sided polygon has a degree measure of:%lf\n",sides, answer);
			}
			break;
		case 'A': case 'a':
			printf("enter the amount of sides in polygon:  ");
    		scanf("%d", &sides);
			printf("enter side length of polygon:  ");
    		scanf("%lf", &side_length);
			if (sides <= 0 || side_length <= 0){
        		printf("negative value do not exist\n");
			}else {
    			answer = area_regular_polygon(side_length, sides);
    			printf("the area with %d sides and %lf length is %lf\n",sides, side_length, answer);
			}
			break;
		default:
			/*error check*/
			printf("unknown equation try again\n");
		}
		break;
	default:
		/*error check*/
		printf("unknown shape try again\n");
	}
	return 0;
}
