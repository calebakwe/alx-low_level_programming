#include <stdio.h>

/**
 * main- print all possible different combinations of two digits
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
    int d1, d2;
    int sep1 = 0;
    int sep2 = 0;

    d1 = 48;
    while (d1 < 58)
    {
        d2 = d1 + 1;
        while (d2 < 58)
        {
            putchar(sep1);
            putchar(sep2);
            putchar(d1);
            putchar(d2);
            d2++;
            sep1 = ',';
            sep2 = ' ';
        }
        d1++;
    }

    putchar(10);
    return (0);
}
