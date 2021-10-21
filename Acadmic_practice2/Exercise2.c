/*
Write a Program that Calculates and prints:
             Sn
    (Sum of the Sequence)

Formula to find Sn is:- [Sn=(a1+an)*n/2]
Given values:-
    d = 2
    a1 = 1
    n = 9
    an = 17

*/

#include<stdio.h>
int main()
{
    int sn,d,a1,n,an;

    // take inputs from user for Sum of Arithmetic Sequences; 
    printf("Enter the difference between sequences d: ");
    scanf("%d",&d);
    printf("Enter the inital term a1: ");
    scanf("%d",&a1);
    printf("Enter the total number of terms n: ");
    scanf("%d",&n);
    printf("Enter the n'th term of the sequence an: ");
    scanf("%d",&an);

    //Formula to find Sum of the sequence is:- [Sn=(a1+an)*n/2]
    sn = (a1+an)*n/2;

    printf("The Sum total of Arithmetic Sequences is: %d\n",sn);

    return 0;
}