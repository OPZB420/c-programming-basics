/*
Write a program that gets as input (from the user):
1.=> Current Year.
2.=> Your Age.

    The program should calculated and print the "Year you were Born"!
*/
#include <stdio.h>
int main()

{
    int c_year,c_age,birth;
    //int c_age;

    printf("Enter Current year: ");
    scanf("%d",&c_year);
    printf("Enter your current age: ");
    scanf("%d",&c_age);
   
    // Find Users birth year
    birth =c_year - c_age;
    printf("Your birth year is: %d\n",birth);

    return 0;

}