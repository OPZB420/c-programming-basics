/*
Write a program that gets 3 numbers and find out the maximum and minimum between them

For Example:
    a. 5,3,7 -"Maximum is 7, Minimum is 3"
    b. 2,5,1 -"Maximum is 5, Minimum is 1"

*/

#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter the value of num1: ");
    scanf("%lf",&a);
    printf("Enter the value of num2: ");
    scanf("%lf",&b);
    printf("Enter the value of num3: ");
    scanf("%lf",&c);

    if (a>b>c)
    {
        printf("Max is %.1lf, Min is %.1lf\n",a,c);
    }
    else if(b>c>a)
    {
        printf("Max is %.1lf, Min is %.1lf\n",b,a);
    }
    else
        printf("Max is %.1lf, Min is %.1lf\n",c,b);
}