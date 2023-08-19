#include "main.h"

/**
 * print_line - Entry point.
 *
 * @n: input for the function as an integer.
 *
 * Description: A  function that draws a straight line in the terminal.
 *
 * Return: Does not return (Void).
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
