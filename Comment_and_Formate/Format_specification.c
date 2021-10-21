/* Formate Specification */

#include <stdio.h>

int main()
{
    printf("I am 20 years old! \n");

    // %d replace with the int that written after ',' .

    printf("I am %d years old!\n",20);

// If we want to use more than one %d then see what's going to happen.

    printf("This year I am %d years old next year I am %d years old!\n",20,21);

// If i want to print Floating number then we need to use %f insted of %d.

    printf("My average grade is %f\n",79.25);// If we use %f for 7.2 then result is 7.20000000
                                            // If we use %.1f or %.2f then the result will be 7.2 or 7.20
    printf("My average grade is %.2f\n",79.25);
    return 0;
}