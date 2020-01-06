/**
 * Exercise 1-14. Write a program to print a histogram of the frequencies
 *                of different characters in its input.
 */

#include <stdio.h> // printf, putchar
#include <ctype.h> // isascii

#define MAX_LENGTH_HISTOGRAM 10     // max length of the histogram
#define MAX_CHARS            128    // ascii characters set

main()
{
    int characters[MAX_CHARS]; // array of ascii characters set

    // initialize the array
    for (int i = 0; i < MAX_CHARS; ++i)
        characters[i] = 0;

    // if ascci char, increase counter, else do nothing
    for (int c = 0; c != EOF; c = getchar())
        if (isascii(c))
            ++characters[c];

    // print the horizontal histogram
    printf("Horizontal histogram\n");
    for (int i = 0; i < MAX_CHARS; ++i)
    {
        for (int j = 0; j < characters[i] && j <= MAX_LENGTH_HISTOGRAM; ++j)
                putchar('-');

        putchar('\n');
    }
}
