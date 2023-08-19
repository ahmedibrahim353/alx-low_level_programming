#include "main.h"

/**
 * _isdigit - Entry point.
 * @c: integer input.
 * Description: a function that checks for a digit (`0` through `9`).
 * Return: 1 if digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
