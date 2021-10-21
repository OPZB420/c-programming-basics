/*
                Weather Station

1.=> Write a program that gets from the user a temperature ("double") in Celsius Degrees.
 
  The program should calculate and convert the temperature 
  from Celsius Degrees to Fahrenheit Degrees and print it.

    ##>>    [ T(F) = T(C)*1.8+32 ]

2.=> Write a program that gets from the user a temperature ("double") in Fahrenheit Degrees.

    The program should calculate and convert the temperature from Fahrenheit Degrees to Celsius Degrees and print it.


*/

// Celsius Degrees to Fahrenheit Degrees

/*
#include<stdio.h>
int main()
{
    // Take Celsius Degrees input from user for coverson
    double celsius, fahrenheit;

    printf("****  Welcome to Celsius to Fahrenheit Converter  ****\n");
    printf("Enter Celsius Degree: ");
    scanf("%lf",&celsius);

    fahrenheit = celsius*1.8+32;
    printf("Temp in Fahrenheit is: %.2lf\n",fahrenheit);

    return 0;

}

*/

// Fahrenheit Degrees to Celsius Degrees
#include<stdio.h>
int main()
{
    // Take fahrenheit Degrees input from user for coverson
    double celsius, fahrenheit;

    printf("****  Welcome to Fahrenheit to Celsius Converter  ****\n");
    printf("Enter Fahrenheit Degree: ");
    scanf("%lf",&fahrenheit);

    celsius = (fahrenheit - 32)*5/9;
    printf("Temp in Celsius is: %.2lf\n",celsius);

    return 0;

}