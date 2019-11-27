/**
 * Exercise 1-4.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    /* print a heading above the table */
    printf("%s\t\t%s\n", "Celsius", "Fahrenheit");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32.0;
        printf("%4.0f\t\t%7.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
