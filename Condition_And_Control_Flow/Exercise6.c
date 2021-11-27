/*
1.> Get grade from user.
2.> If grade is 80 or higher
    - print"Excellent job!"
3.> If grade is less than 80 but still is 60 or higher
    - print "Not bad...."
4.> But if the grade is less than 60
    - print "Oh.... You didn't pass"

*/

#include<stdio.h>
int main()
{
    int grade;
    printf("Enter the grade of Student: ");
    scanf("%d",&grade);

    if(grade>=80)
    {
        printf("Excellent Job\n");
    }
    else if(grade>=60 && grade<80)
    {
        printf("Not bad....\n");
    }
    else
        printf("Oh.... You didn't Pass! \n");
}