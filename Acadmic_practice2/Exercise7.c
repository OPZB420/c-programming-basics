/*
    Write a program that receives a number with 3 digits.

    The program should calculate the sum of digit in the number.

        num = 531
        sum of digits: 5 + 3 + 1 = 9
        531 = 
        unit = 1 = num % 10 (take remander)
        tens = 3 = (num/10)%10 (take remander)
        hundred = 5 = num/100 (take quotient)
*/

#include<stdio.h>
int main()
{
    int num,unit,tens,hundred;
    printf("Enter any three digit: ");
    scanf("%d",&num);
    
    printf("The sum of three digits is: %d\n",unit+tens+hundred);

}