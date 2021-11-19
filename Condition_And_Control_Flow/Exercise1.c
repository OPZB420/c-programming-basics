/*

Basic Grades Program

1. Read input from user(it`s grade).
2. print"Congratulations!".

1. Read input from user(it`s grade).
2. Print"Failed. Try Again...".

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    double grade;
    printf("Enter your grade: ");
    scanf("%lf",&grade);
    if (grade>=60)
        printf("Congratulations!\n");
    else
        printf("Failed, Try Again....\n");
    return 0;
}