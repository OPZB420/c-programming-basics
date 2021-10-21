/*
            Arithmetic Sequence
Write a Program that calculates and prints:
            a
             n
       (the n-th term of the sequence)

formula to find the n-th term => [ an = a1 +(n-1)*d ]
Given values:
    d = 2
    a1 = 1
    n = 9
    an = ?

*/

#include<stdio.h>

int main()
{
    int d,a1,n,an;

    printf("Enter the initial term a1: ");
    scanf("%d",&a1);
    printf("Enter the difference d: ");
    scanf("%d",&d);
    printf("Enter total number of terms n: ");
    scanf("%d",&n);
    // [ an = a1 +(n-1)*d ]
    an = a1 +(n-1)*d;

    printf("The n-th term is: %d\n",an);

    return 0;
}