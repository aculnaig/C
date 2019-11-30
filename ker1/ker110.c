/**
 * Exercise 1-10. Write a program to copy its input to its output,
 *                replacing each tab by \t, each backspace by \b, and each backslah by \\.
 *
 *                This makes tabs and backspaces visible in an unambiguos way.
 *
 */

#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

#define TAB_CHAR "\\t"
#define BACKSPACE_CHAR "\\b"
#define BACKSLASH_CHAR "\\\\"

main()
{
   for (int c = 0; c != EOF; c = getchar())
   {
        if (c == TAB)
            printf(TAB_CHAR);
        else if (c == BACKSPACE)
            printf(BACKSPACE_CHAR);
        else if (c == BACKSLASH)
            printf(BACKSLASH_CHAR);
        else
            putchar(c);
   }
}
