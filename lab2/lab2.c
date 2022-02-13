/**
 * @file lab2.c
 *
 * @author Madison Mejia
 *
 * @date 2/9/2022
 *
 * Assignment: Lab 2
 *
 * @brief A program that uses the function in functions.c
 *
 * @details
 *
 * @bug none
 *
 * @todo none
 */

#include "functions.h"
#include <stdio.h>


int main(void) 
{

        int selection, tmp;
        double result;
        int rect_height, rect_width, n_sides;
        double r, tri_height, tri_base, side_length;

        printf("Select a shape from the following:\n");
        printf("R for Rectangles\n");
        printf("C for Circles\n");
        printf("T for Right Triangles\n");
        printf("P for Regular Polygons\n");
        printf("Make your selection: ");

        while ((tmp = getchar()) != '\n') 
                selection = tmp;


        switch (selection) {
        case 'R': 
        case 'r':
                printf("Select a calculation to perform:\n");
                printf("A for Area\n");
                printf("P for Perimeter\n");
                printf("D for Diagonal\n");
                printf("Make your selection: ");

;               while ((tmp = getchar()) != '\n') {
                        selection = tmp;
                        switch (selection) {
                        case 'A':
                        case 'a':
                                printf("Input height and width as integers: ");
                                scanf("%d %d", &rect_height, &rect_width);
                                if (rect_height <= 0 || rect_width <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = area_rectangle(rect_height, rect_width);
                                        printf("The rectangle has an area of %lf.\n",
                                        result);
                                }
                                break;
                        case 'P':
                        case 'p':
                                printf("Input height and width as integers: ");
                                scanf("%d %d", &rect_height, &rect_width);
                                if (rect_height <= 0 || rect_width <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else { 
                                        result = perimeter_rectangle(rect_height, rect_width);
                                        printf("The rectangle has a perimeter of %lf.\n",
                                        result);
                                }
                                break;
                        case 'D':
                        case 'd':
                                printf("Input height and width as integers: ");
                                scanf("%d %d", &rect_height, &rect_width);
                                if (rect_height <= 0 || rect_width <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else { 
                                        result = diagonal_rectangle(rect_height, rect_width);
                                        printf("The rectangle has a diagonal of %lf.\n",
                                        result);
                                }
                                break;
                        default:
                                printf("Unknown calculation\n");
                        }
                                
                        
                }
                break;
        case 'C':
        case 'c':
                printf("Select a calculation to perform:\n");
                printf("A for Area\n");
                printf("C for Circumference\n");
                printf("Make a selection: ");

                while ((tmp = getchar()) != '\n') {
                        selection = tmp;
                        switch (selection) {
                        case 'A':
                        case 'a':
                                printf("Input circle radius: ");
                                scanf("%lf", &r);
                                if (r <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = area_circle(r);
                                        printf("The circle has an area of %lf.\n",
                                        result);
                                }
                                break;
                        case 'C':
                        case 'c':
                                printf("Input circle radius: ");
                                scanf("%lf", &r);
                                if (r <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = circumference(r);
                                        printf("The circle has a circumference of %lf.\n",
                                        result);
                                }
                                break;
                        default:
                                printf("Unknown calculation\n");
                        }
                }
                break;
        case 'T':
        case 't':
                printf("Select a calculation to perform:\n");
                printf("A for Area\n");
                printf("H for Hypotenuse\n");
                printf("P for Perimeter\n");
                printf("Make a selection: ");

                while ((tmp = getchar()) != '\n') {
                        selection = tmp;
                        switch (selection) {
                        case 'A':
                        case 'a':
                                printf("Enter the height and base: ");
                                scanf("%lf %lf", &tri_height, &tri_base);
                                if (tri_height <= 0 || tri_base <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = area_triangle(tri_height, tri_base);
                                        printf("The area of the triangle is %lf.\n",
                                        result);
                                }
                                break;
                        case 'H':
                        case 'h':
                                printf("Enter the height and base: ");
                                scanf("%lf %lf", &tri_height, &tri_base);
                                if (tri_height <= 0 || tri_base <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = hypotenuse(tri_height, tri_base);
                                        printf("The hypotenuse is %lf.\n",
                                        result);
                                }
                                break;
                        case 'P':
                        case 'p':
                                printf("Enter the height and base: ");
                                scanf("%lf %lf", &tri_height, &tri_base);
                                if (tri_height <= 0 || tri_base <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = perimeter_triangle(tri_height, tri_base);
                                        printf("The perimeter of the triangle is %lf.\n",
                                        result);
                                }
                                break;
                        default:
                                printf("Unknown calculation\n");
                        }
                }
                break;
        case 'P':
        case 'p':
                printf("Select a calculation to perform:\n");
                printf("I for Interior Angle\n");
                printf("E for Exterior Angle\n");
                printf("A for Area\n");
                printf("Make a selection: ");

                while ((tmp = getchar()) != '\n') {
                        selection = tmp;
                        switch (selection) {
                        case 'I':
                        case 'i':
                                printf("Enter the number of sides in a polygon: ");
                                scanf("%d", &n_sides);
                                if (n_sides <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = interior_angle(n_sides);
                                        printf("The angle is %lf.\n",
                                        result);
                                }
                                break;
                        case 'E':
                        case 'e':
                                printf("Enter the number of sides in a polygon: ");
                                scanf("%d", &n_sides);
                                if (n_sides <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = exterior_angle(n_sides);
                                        printf("The angle is %lf.\n",
                                        result);
                                }
                                break;
                        case 'A':
                        case 'a':
                                printf("Enter the number of sides in a polygon: ");
                                scanf("%d", &n_sides);
                                printf("Enter the length of a side: ");
                                scanf("%lf", &side_length);
                                if (n_sides <= 0 || side_length <= 0) {
                                        printf("Illegal: Negative value(s)\n");
                                } else {
                                        result = area_regular_polygon(n_sides, side_length);
                                        printf("The area is %lf.\n",
                                        result);
                                }
                                break;
                        default:
                                printf("Unknown calculation\n");
                        }
                }
                break;
        default:
                printf("Unknown shape\n");
        }

        return 0;
}
