#include "main.h"


/**
 * print_most_numbers - Entry point.
 *
 * Description: A  function that prints the numbers, from 0 to 9.
 *
 * Return: Does not return (Void).
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i < ':'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
