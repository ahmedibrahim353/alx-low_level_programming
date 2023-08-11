#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This program will assign a random number to the variable */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f';	c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

