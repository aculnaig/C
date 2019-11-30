/**
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 *
 */

#include <stdio.h>

main()
{
    int c, nblank, ntab, nline;

    for (c = nblank = ntab = nline = 0; c != EOF; c = getchar())
    {
        if (c == ' ')
            ++nblank;
        else if (c == '\t')
            ++ntab;
        else if (c == '\n')
            ++nline;
        else;
    }

    printf("blanks: %d, tabs: %d, newlines: %d\n", nblank, ntab, nline);
}
