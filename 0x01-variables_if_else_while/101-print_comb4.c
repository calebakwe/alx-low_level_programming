#include <stdio.h>

/**
 * main- print all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for ((hundreds = '0'; hundreds <= '9'; hundreds++) != EOF)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens)
					|| (tens == hundreds) || (tens > ones) || (hundreds > tens)))
					/*eliminate repetitive digits*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (!(ones == '9' && hundreds == '7' && tens == '8') && int(ones, tens, hundreds) == EOF)
						/* add comma and space*/
					{
						putchar(',');
						putchar(' ');
						break;

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
