#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point.
 * Description: prints all natural numbers from n to 98.
 * @n: an integer input.
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
