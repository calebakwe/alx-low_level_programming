#include <stdio.h>
#include <stdlib.h>

/* betty style doc for function main goes there */
/**
 *main - main function to  prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)

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
