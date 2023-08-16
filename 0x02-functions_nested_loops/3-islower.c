
#include "main.h"
/**
 * _islower - Entry point.
 * Description: This is a seperate file for the function.
 * @c: is the integer input for the function.
 * Return: 1 if lower case , otherwise 0 .
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
