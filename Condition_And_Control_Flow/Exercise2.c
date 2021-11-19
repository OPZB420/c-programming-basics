/*
Read 2 numbers from user
if num1 is greater than num2
print "num1"
else "num2"

*/

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);

    if (num1>num2)
        printf("%d is greater than %d\n",num1,num2);
    else
        printf("%d is greater than %d\n",num2,num1);

    return 0;
}