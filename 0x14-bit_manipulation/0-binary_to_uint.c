#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars.
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		converted <<= 1;
		if (*b == '1')
			converted += 1;
		b++;
	}
	return (converted);
}
