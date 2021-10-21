/*
Challenge

Write a program that gets 3 grades (int) from the user.

The program should calculate and print the EXACT average.

*/

#include<stdio.h>
int main()
{
    // I am going to take input from user as students 
    int student_1, student_2, student_3;
    double average;
    
    printf("Student 1 grade: ");
    scanf("%d",&student_1);
    printf("Student 2 grade: ");
    scanf("%d",&student_2);
    printf("Student 3 grade: ");
    scanf("%d",&student_3);

    // I am going to use Casting to convert int values in float values and assign to average.
    average = ((double)student_1+student_2+student_3)/3; // i can also change 3 to 3.0 (int -> float)

    printf("Average of Students is: %.2lf\n",average);

    return 0;
}