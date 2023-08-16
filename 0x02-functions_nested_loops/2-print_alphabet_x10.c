#include "main.h"
/**
 * print_alphabet_x10 - Entry point.
 * Description: This is a seperate file for the function.
 * Return: NON.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
	for (i = 'a'; i < '{'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
