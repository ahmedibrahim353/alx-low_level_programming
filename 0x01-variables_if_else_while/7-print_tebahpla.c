#include <stdio.h>

/* This program will assign a random number to the variable */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		--i;
	}

	putchar('\n');

	return (0);
}

