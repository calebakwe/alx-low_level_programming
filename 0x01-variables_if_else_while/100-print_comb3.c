#include <stdio.h>

/**
 * main- print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '9';

	for (tens = '0'; tens <= '9'; tens++)/*print tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*removes repetition*/
			{
				putchar(',');
				putchar(' ');
				if (!(ones == '0' && '9'))/*adds comma and space*/
				{
					putchar(tens);
					putchar(ones);
				}
			}
		}
		
	}
	putchar('\n');
	return (0);
}
