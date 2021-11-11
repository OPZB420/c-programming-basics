/*
    Write a program that calculates the distance between 2 points.

    (x1,y1)<---------->(x2,y2)

     ___________________
    /(x1-x2)^2+(y1-y2)^2


*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float x1,y1,x2,y2;
    double distance;
    printf("Enter the value of x1: ");
    scanf("%f",&x1);
    printf("Enter the value of y1: ");
    scanf("%f",&y1);
    printf("Enter the value of x2: ");
    scanf("%f",&x2);
    printf("Enter the value of y2: ");
    scanf("%f",&y2);

    distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("Distance between two points is: %lf\n",distance);
    return 0;
}