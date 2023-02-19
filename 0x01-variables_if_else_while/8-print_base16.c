#include <stdio.h>
#include <stdlib.h>

/**
 * main- return hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';
	int num = '0';

	while (num  <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
