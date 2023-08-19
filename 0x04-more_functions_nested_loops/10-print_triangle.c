#include "main.h"

/**
 * print_triangle - Entry point.
 *
 * @size: input for the function integer.
 *
 * Description: A function that prints a triangle .
 *
 * Return: Does not return (Void).
 */

void print_triangle(int size)
{
	int k;
	int l;
	int m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (l = size; l > (k + 1); l--)
			{
				_putchar(' ');
			}
			for (m = 0; m <= k; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
