/*
Write a program that receives an integer respresenting seconds.

The program should convert the given second into:
    1.=> Total Hours
    2.=> Total minutes
    3.=> Remaining Seconds

*/

#include<stdio.h>
int main()
{
    int second;
    int hours,min,remainingsec;
    // Take input of Second from the user
    printf("Enter the total seconds: ");
    scanf("%d",&second);
    hours = second / 3600;
    min = (second - hours * 3600)/60;
    remainingsec = (second - hours *3600) % 60;

    printf("Total Hours: %d",hours);
    printf(" : %d",min);
    printf(" : %d\n",remainingsec);

    return 0;
}