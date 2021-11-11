/*
    Write a program that receives a number with 3 digits.

    The program should print the reversed number of "num".

        "num" = 531
        Reversed "num" = 135
    531
    unite = num % 10 = 1
    tens = (num/10)%10 = 3
    hundred = num / 100 = 5

*/
#include<stdio.h>
int main()
{
    int num,unit,tens,hundred;
    printf("Enter any 3-digit value: ");
    scanf("%d",&num);

    unit = num % 10;
    tens = (num/10)%10;
    hundred = num / 100;
    
    printf("Reversed value of 3-digits is: %d%d%d\n",unit,tens,hundred);
}