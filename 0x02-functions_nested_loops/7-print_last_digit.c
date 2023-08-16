#include "main.h"
/**
 * print_last_digit - Entry point.
 * @i: an integer number.
 * Description: function that prints the last digit of a number.
 * Return: integer value
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j < 0)
	{
		_putchar(-j + '0');
		return (-j);
	}
	else
	{
		_putchar(j + '0');
		return (j);
	}
}
