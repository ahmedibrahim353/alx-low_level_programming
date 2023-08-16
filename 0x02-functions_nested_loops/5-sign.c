#include "main.h"
/**
 * print_sign - Entry point.
 * Description: function that prints the sign of a number.
 * @n: this is an integer input.
 * Return: 1 if positve, 0 if zero, -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
