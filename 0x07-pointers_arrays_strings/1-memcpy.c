#include"main.h"
/**
 * *_memcpy - Copying Memory Area.
 * @dest: pointer to char input.
 * @src: pointer to char second input.
 * @n: unsigned integer.
 * Return: char value.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
