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


int main(void) {

        int selection, tmp;
        int rect_height = 8, rect_width = 4;

        printf("Select a shape from the following:\n");
        printf("R for Rectanglse\n");
        printf("C for Circles\n");
        printf("T for Right Triangles\n");
        printf("P for Regular Polygons\n");
        printf("Make your selection: \n");

        while ((tmp = getchar()) != '\n')
                selection = tmp;

        switch (selection) {
        case 'R': 
        case 'r':
                printf("Select a caluclation to perform:\n");
                printf("A for Area\n");
                printf("P for Perimeter\n");
                printf("D for Diagonal\n");
                printf("Make your selection: \n")
;                while ((tmp = getchar()) != '\n');
                        selection = tmp;




        }

        double area_r = area_rectangle(rect_height, rect_width);
        printf("A rectangle with height %d and width %d has an area of %lf.\n",
        rect_height, rect_width, area_r);

        return 0;
}
