#include <stdio.h>
#include <stdlib.h>

/**
 * main- returns alphabets except e and q
 *
 * Return : Always 0 (Success)
 */

int main(void)
/* main- returns all letters except e and q*/
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
