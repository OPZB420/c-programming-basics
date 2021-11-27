/*
Write a program that gets 2 floating-point numbers and prints:
    maximum and minimum
    Maximum: 5.2
    Minimum: 3.5

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2,max,min;
    printf("Enter the first floating point number: ");
    scanf("%f",&num1);
    printf("Enter the Second floating point number: ");
    scanf("%f",&num2);

    if(num1>num2){
        printf("%.2f is maximum\n",num1);
        printf("%.2f is minimum\n",num2);
    }
    else if(num2>num1){
        printf("%.2f is maximum\n",num2);
        printf("%.2f is minimum\n",num1);
    }
    else
    {
        printf("Try agian!");
    }
    return 0;
}