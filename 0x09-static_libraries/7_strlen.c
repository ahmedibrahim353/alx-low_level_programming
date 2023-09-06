#include"main.h"
#include<string.h>

/**
 * _strlen - count string length
 *
 *@s: point to char
 *
 * Return: return string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
		i++;
			return (i);
}
