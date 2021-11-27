/*
    A program that recives an integer "X" 
The program should calculate and print:

    1. X^2
    2. X^4
    3. X^6
    4. X^8
* The calculation should be done efficiently!

*/

#include <stdio.h>
int main()
{
    double x,x2,x4,x6,x8;
    printf("Enter the value of X: ");
    scanf("%lf",&x);
    // x^2,4,6,8
    x2 = x*x;
    x4 = x*x*x*x;
    x6 = x*x*x*x*x*x;
    x8 = x*x*x*x*x*x*x*x;
    printf("The values are \nX^2=%lf,\nX^4=%lf,\nX^6=%lf,\nX^8=%lf\n",x2,x4,x6,x8);
    return 0;
}

