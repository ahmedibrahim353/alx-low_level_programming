#include "main.h"
/**
 * _isalpha - Entry point.
 * Description: This is a seperate file for the function.
 * @c: is the integer input for the function.
 * Return: 1 if lower case , otherwise 0 .
 */
int _isalpha(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else if (c < 90 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
