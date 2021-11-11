/*

Write a program that receives a variable "data" of type "float" from the user.

The program should print only the "decimal" part of "data".

    "data" = 12.7
    "decimal part" = 0.7

*/
#include<stdio.h>
int main()
{
    float data;
    printf("Please enter a float value: ");
    scanf("%f",&data);

    printf("Decimal part is: %.2f\n",data - (int)data);
    return 0;
}