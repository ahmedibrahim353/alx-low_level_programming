#include"main.h"
#include<stdio.h>
/**
 * print_diagsums - sum of two diagonals.
 * @a: integer input.
 * @size: integer input.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumr = 0;
	int suml = 0;

	for (i = 0; i < size; i++)
	{
		suml = suml + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		sumr = sumr + a[i];
		a = a - size;
	}
	printf("%d, %d\n", suml, sumr);
}
