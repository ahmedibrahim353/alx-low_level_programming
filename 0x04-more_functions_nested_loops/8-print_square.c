#include "main.h"

/**
 * print_square - Entry point.
 *
 * @size: input for the function as integer.
 *
 * Description: A function that prints a square.
 *
 * Return: Does not return (Void).
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}

