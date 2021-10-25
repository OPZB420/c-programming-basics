/*
A vehicle leaves from city A to city B.

You know the distance from A to B as well as the speed the vehicle is going to drive.

So you have to initialize the distance and speed.

Then you have to find out how long it will the car to reach city B from city A and print this result to the screen.

The formula can be rearranged in three ways:

 => speed = distance ÷ time

 => distance = speed × time

 => time = distance ÷ speed
*/


#include<stdio.h>
int main()
{
    int speed, distance, hours;
    
    printf("Enter the speed of the car: ");
    scanf("%d",&speed);
    printf("Enter the Distance between City A to B: ");
    scanf("%d",&distance);

    // We need to find time 
    
    hours = distance / speed;
    float speedinmin = speed/60.0;
    int remainingmin = (distance % speed) / speedinmin;
    
    printf("Total time taken by car is: %2.d hours and %d min.\n",hours,remainingmin);

    return 0;
}

