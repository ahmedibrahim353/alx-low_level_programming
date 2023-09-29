#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need to flip.
 * @n: input.
 * @m: input.
 * Return: unsigned intger.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int X = n ^ m, i = 0;

	while (X)
	{
		i++;
		X = X & (X - 1);
	}
	return (i);
}
