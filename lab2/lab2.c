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
        int rect_height = 8, rect_width = 4;

        double area_r = area_rectangle(rect_height, rect_width);
        printf("A rectangle with height %d and width %d has an area of %lf.\n",
        rect_height, rect_width, area_r);

        return 0;
}
