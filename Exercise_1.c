/* Format Specifications - Practice
Exercise:
Given 10 exercises to practice format specifiers using the "printf" function.
Write down what will be printed at each of them and then make sure of that by
testing the results in Code::Blocks.
1. printf("We have %d coins in the bank\n", 100);
2. printf("We have %f coins in the bank\n", 125.7);
3. printf("Year = %d\n", 2020);
4. printf("Your average grade is: %f \n", 95.13);
5. printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
6. printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
7. printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
8. printf("a = %d, b = %d, sum = a + b = %d \n"​, 3, 5, 3+5);
9. printf("a = %d, b = %d, sum = %d + %d = %d \n"​, 3, 5, 3, 5, 3+5);
10. printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n"​, 3, 5, 3, 5, 3+5);
Note: the numbers that the placeholder "holds" - do not necessarily have to be so
small, they can greater than 100, 1000, and even more...
*/

#include <stdio.h>

int main()
{
    // Exercise 1 using %d
    printf("We have %d coins in the bank\n", 100);

    // Exercise 2 using %f
    printf("We have %f coins in the bank\n", 125.7);

    // Exercise 3 using = %d
    printf("Year = %d\n", 2020);

    // Exercise 4 using %f for floating number
    printf("Your average grade is: %f \n", 95.13);

    // Exercise 5 using %d more than one times to sum the numbers
    printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);

    // Exercise 6 using %f for sum more than one numbers
    printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);

    // Exercise 7 using %d for subtraction 
    printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);

    // Exercise 8 using %d adding more than one times
    printf("a = %d, b = %d, sum = a+b = %d \n", 3, 5, 3+5);
    
    // Exercise 9 using %d more than one time for sum
    printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);


    return 0;
}
