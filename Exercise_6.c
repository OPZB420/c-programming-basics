/*
Challenge

Write a program that gets two "Double Number":
1.=> Rectangle Height.
2.=> Rectangle Width.

The program should calculate and print the area of the given rectangle.

*/

#include<stdio.h>
int main()
{
        // Always assign variables in small letters 

    double height, width, area;
        // Variable type double means it contains integer and float both values.

    printf("Enter the height of Rectangle: ");
    scanf("%lf",&height);

        // %lf insted of %d or %f because %lf conatains both the values.

    printf("Enter the Width of Rectangle: ");
    scanf("%lf",&width);

    area = height * width;

        // %2.lf num 2 use because i want to print only two digits after dot like 58.22.

    printf("Area of Rectangle is: %lf\n",area);

    return 0;
}