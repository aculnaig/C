/**
 * Exercise 1-12. Write a program that prints its input one word per line.
 *
 */

#include <stdio.h>

main()
{
    for (int c = 0; c != EOF; c = getchar())
    {
        if (c == ' ' || c == '\t')
            putchar('\n');
        else
            putchar(c);
    }
}
