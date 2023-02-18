#include <stdio.h>
#include <stdlib.h>

/**
 * main- returns numbers of base 10
 *
 * Return : Always 0 (Success)
 */

int main(void)

{
        char ch = '0';

        while (ch <= '9')
        {
                putchar(ch);
                ch++;
        }
        putchar('\n');
        return (0);
}
