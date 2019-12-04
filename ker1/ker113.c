/**
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.
 *                It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 *
 */

#include <stdio.h>

#define WORDS 10

main()
{
    int words_length[WORDS];

    for (int i = 0; i < WORDS; ++i)
        words_length[i] = 0;

    for (int c = 0, i = 0; (i < WORDS) && (c != EOF); c = getchar())
    {
         if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            ++words_length[i];
         else if (c == '\n')
            ++i;
    }

    for (int i = 0; words_length[i] != 0; ++i)
    {
        for (int j = 0; j < words_length[i]; ++j)
        {
            putchar('-');
        }
        putchar('\n');
    }
}
