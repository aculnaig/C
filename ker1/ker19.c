/**
 *
 * Exercise 1-9. Write a program to copy its input to its output,
 *               replacing each string of one or more blanks by a single blank.
 *
 */

#include <stdio.h>

main()
{
    int nblank = 0;

    for (int c = 0; c != EOF; c = getchar())
    {
        if (c == ' ')
            ++nblank;

        if (c == ' ' && nblank > 1)
            putchar(0);
        else if (c != ' ' && nblank >= 1) {
            putchar(c);
            nblank = 0;
        } else
            putchar(c);
    }
}
