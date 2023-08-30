#include"main.h"
/**
 * _sqrt - a helper function.
 * @i: integer input.
 * @j: integer input.
 * Return: ALwayes integer.
 */
int _sqrt(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j < i)
	{
		return (_sqrt(i, j + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - natural square.
 * @n: integer input.
 * Return: Alwayes integer.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
