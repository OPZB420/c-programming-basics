/*
Write a program that receives:

1.=> Salary (per hour)
2.=> Total hours worked(in a month)

The program should calculate and print the total monthly salary of the employee.

*/


#include<stdio.h>

int main()

{   
    int salary_ph, total_hw, total_s;

    printf("Enter the per hour salary amount: $");
    scanf("%d",&salary_ph);
    // Take input of total number of hours worked in month.
    printf("Enter the total number of hours worked in a month: $");
    scanf("%d",&total_hw);
    // total_s = total salary
    total_s = salary_ph * total_hw;
    
    printf("Total salary for this month is: $%d \n",total_s);
    return 0;

}