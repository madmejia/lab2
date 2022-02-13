/**
 * @file ch5_pp8.c
 *
 * @author Gabe Turner
 *
 * @date 9/13/20
 *
 * Assignment: Lab 2
 *
 * @brief finding the closest departure time based on the user inputting a time
 *
 * @details First, this asks for the user to input a time. It then converts this time 
 * to its minute value as it is easier to calculate doing it this way. After this it then
 * compares the number to the flights minute value based on departures. Doint this, it then
 * finds which value that its between its closer too and then prints a message accordingly.
 *
 * @bugs none
 *
 * @todo none
 */
#include <stdio.h>

int main(void){
    int hours;
    int minutes;
    int time;
    int tmp;
    /**
     *these variable correspond to each flights departure time in a minute value
     *for example f1 being 480 corresponds to flight one departing at 8:00 am
    */
    int f1 = 480, f2 = 583, f3 = 679, f4 = 767;
    int f5 = 840, f6 = 945, f7 = 1140, f8 = 1185;

    /**
     *this basically just gets the users input for the time
     *then it converts it to a minute value for easier calculations
    */
    printf("input time in 24 hour format: ");
    scanf("%d:%d", &hours, &minutes);
    time = (hours * 60) + minutes;

    /**
     * @param time this is the time converted into minutes
     * @param f# the flight number and the minute value of its departure
     * basically this if statement first finds which values of f time falls between
     * then knowing this, it finds the middle point between f# and f#+1
     * finding this, it decides if time is above or below this value
     * then it prints a message now that it knows which flight its closest to
    */
    if (time <= f1) {
        printf("departure time is 8:00 a.m.\n");
        printf("arrival time 10:16 a.m.\n");
    }else if (f1 < time && time < f2) {
        tmp = (f1 + f2) / 2;
        if (time <= tmp){
            printf("departure time is 8:00 a.m.\n");
            printf("arrival time 10:16 a.m.\n");
        }else{
            printf("departure time is 9:43 a.m.\n");
            printf("arrival time 11:52 a.m.\n");
        }
    }else if (f2 < time && time < f3) {
        tmp = (f2 + f3) / 2;
        if (time <= tmp){
            printf("departure time is 9:43 a.m.\n");
            printf("arrival time 11:52 a.m.\n");
        }else{
            printf("departure time is 11:19 a.m.\n");
            printf("arrival time 1:31 p.m.\n");
        }
    }else if (f3 < time && time < f4) {
        tmp = (f1 + f2) / 2;
        if (time <= tmp){
            printf("departure time is 11:19 a.m.\n");
            printf("arrival time 1:31 p.m.\n");
        }else{
            printf("departure time is 12:47 p.m.\n");
            printf("arrival time 3:00 p.m.\n");
        }
    }else if (f4 < time && time < f5) {
        tmp = (f4 + f5) / 2;
        if (time <= tmp){
            printf("departure time is 12:47 p.m.\n");
            printf("arrival time 3:00 p.m.\n");
        }else{
            printf("departure time is 2:00 p.m.\n");
            printf("arrival time 4:08 p.m.\n");
        }
    }else if (f5 < time && time < f6) {
        tmp = (f5 + f6) / 2;
        if (time <= tmp){
            printf("departure time is 2:00 p.m.\n");
            printf("arrival time 4:08 p.m.\n");
        }else{
            printf("departure time is 3:45 p.m.\n");
            printf("arrival time 5:55 p.m.\n");
        }
    }else if (f6 < time && time < f7) {
        tmp = (f6 + f7) / 2;
        if (time <= tmp){
            printf("departure time is 3:45 p.m.\n");
            printf("arrival time 5:55 p.m.\n");
        }else{
            printf("departure time is 7:00 p.m.\n");
            printf("arrival time 9:20 p.m.\n");
        }
    }else if (f7 < time && time < f8) {
        tmp = (f7 + f8) / 2;
        if (time <= tmp){
            printf("departure time is 7:00 p.m.\n");
            printf("arrival time 9:20 p.m.\n");
        }else{
            printf("departure time is 9:45 p.m.\n");
            printf("arrival time 11:58 p.m.\n");
        }
    }else {
        printf("departure time is 9:45 p.m.\n");
        printf("arrival time 11:58 p.m.\n");
    }
    return 0;
}