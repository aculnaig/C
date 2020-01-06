/**
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in its input.
 *                It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 *
 */

#include <stdio.h>

#ifndef WORD_MAX_LENGTH
#define WORD_MAX_LENGTH 11 /* Max length of a word */
#endif

main()
{
    int words_length_frequencies[WORD_MAX_LENGTH]; // array of word length frequencies of given n length ( 1, 2, 3, ..., n-1 characters long )
    int greatest_word_length_frequency = 0; // the greatest word length frequency recorded

    // Initialize the array
    for (int i = 1; i < WORD_MAX_LENGTH; ++i)
        words_length_frequencies[i] = 0;

    // Count chars until EOF. Do not count words greater than WORD_MAX_LENGTH
    int nchar = 0;
    for (int c = 0; c != EOF; c = getchar())
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            ++nchar;
        } else {
          if (nchar > 0 && nchar < WORD_MAX_LENGTH)
              ++words_length_frequencies[nchar];
          nchar = 0;
        }
    }

    // Find the greatest word length frequency recorded
    for (int i = 1; i < WORD_MAX_LENGTH; ++i)
        if (words_length_frequencies[i] > greatest_word_length_frequency)
            greatest_word_length_frequency = words_length_frequencies[i];

    printf("Horizontal histogram\n");
    for (int i = 1; i < WORD_MAX_LENGTH; ++i)
    {
        for (int j = 0; j < words_length_frequencies[i]; ++j)
        {
            putchar('-');
        }
        putchar('\n');
    }

    printf("Vertical histogram\n");
    for (int i = greatest_word_length_frequency; i > 0; --i)
    {
        for (int j = 1; j < WORD_MAX_LENGTH; ++j)
        {
            if (words_length_frequencies[j] >= i) {
                putchar('-');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
