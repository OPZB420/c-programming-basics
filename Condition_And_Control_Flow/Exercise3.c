/*
Write a program checks whether a given number is even or odd

For example:
    - "5 is an odd number"
    - "20 is an even number"

*/

#include<stdio.h>
int main()
{
    int num,res;
    printf("Enter a number: ");
    scanf("%d",&num);
    res = num%2;
    if (res==0)
        printf("%d is even number\n",num);
    else
        printf("%d is odd number\n",num);
}