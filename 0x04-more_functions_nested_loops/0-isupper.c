#include "main.h"

/** _isupper - check the code for uppercase.
 *@x: The number to be checked
 * Return: Always 1 for upper letter or 0 for any else.
 */

int _isupper(int x)
{
	if (x >= 65 && x < 90)
	{
	return (1);
	}
	return (0);
}
