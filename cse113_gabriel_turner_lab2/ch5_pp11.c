/**
 * @file ch5_pp8.c
 *
 * @author Gabe Turner
 *
 * @date 9/13/20
 *
 * Assignment: Lab 2
 *
 * @brief change a two digit number into words
 *
 * @details The program gets a users input of a two digit number. It then takes the tens digit
 * and converts it into a variable tens and then does the same thing with the ones digit.
 * From this it goes through a series of switch statements to print out the correct 
 * words that correspond to the number inputted.
 *
 * @bugs none
 *
 * @todo none
 */

#include <stdio.h>

int main(void)
{
    int tens;
    int ones;

    /**
     * this gets the user to input a number with 2 digits
     * it then converts the digits to its 10s and 1s places
    */
    printf("print 2 digit number: ");
    scanf("%1d%1d", &tens, &ones);

    /**
     * this first checks if the first digit is 1 as 10-19 are special cases
     * if it is then it will prints special responses based on the ones place
     * if not then it will first find what the tens value is and print a word according
     * then it does the same thing with the ones place
     * basically this is what converts the number to words.
    */
    if (tens == 1){
        switch (ones) {
        case 0:
            printf("ten\n");
            break;
        case 1:
            printf("eleven\n");
            break;
        case 2:
            printf("twelve\n");
            break;
        case 3:
            printf("thirteen\n");
            break;
        case 4:
            printf("fourteen\n");
            break;
        case 5:
            printf("fifteen\n");
            break;
        case 6:
            printf("sixteen\n");
            break;
        case 7:
            printf("seventeen\n");
            break;
        case 8:
            printf("eighteen\n");
            break;
        case 9:
            printf("nineteen\n");
            break;
        }
    } else {
        switch (tens) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("fourty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }
        switch (ones) {
        case 0:
            printf("\n");
            break;
        case 1:
            printf("-one\n");
            break;
        case 2:
            printf("-two\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
        }
    }
}