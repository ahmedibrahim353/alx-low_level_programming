#include"main.h"
/**
 * _prime - helping function.
 * @a: integer input.
 * @b: integer input.
 * Return: ALwayes integer.
 */
int _prime(int a, int b)
{
	if (a <= 1 || a % b == 0)
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	else if (a > b)
	{
		_prime(a, b + 1);
	}
	return (1);
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: an integer input.
 * Return: Alwayes integer.
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
