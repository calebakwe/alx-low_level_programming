#include <stdio.h>

/**
 * main- print all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)

{
        int ones = '0';

        	for (ones = '0'; ones <= '9'; ones++)/*prints ones digit*/
                {
                	 putchar(ones);
                                if (!(ones == '0' && '9'))/*adds comma and space*/
				{	
					putchar(',');
                                        putchar(' ');
               			}
                }
        putchar('\n');
        return (0);
}
