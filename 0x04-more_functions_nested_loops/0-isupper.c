#include "main.h"

/**
 * _isupper - Entry point,
 * @c: an integer input.
 * Description: function that checks for uppercase character.
 * Return: int 1 if uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
