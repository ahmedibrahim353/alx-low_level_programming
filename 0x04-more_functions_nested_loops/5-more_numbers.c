#include "main.h"

/**
 * more_numbers - Entry point.
 *
 * Description: A  function that prints the numbers, from 0 to 14.
 *
 * Return: Does not return (Void).
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
			_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
