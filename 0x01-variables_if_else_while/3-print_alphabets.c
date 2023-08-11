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
	char i;
	/*char chars = "abcdefghijklmnopqrstuvwxyz";*/
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z';	i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

