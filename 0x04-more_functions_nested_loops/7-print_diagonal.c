#include "main.h"

/**
 * print_diagonal - Entry point.
 *
 * @n: input for the function as an integer.
 *
 * Description: A function that draws a diagonal line on the terminal.
 *
 * Return: Does not return (Void).
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i ; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
