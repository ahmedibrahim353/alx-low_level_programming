#include"main.h"
/**
 * _strspn - function gets the length.
 * @s: a pointer to char input.
 * @accept: a pointer to char input.
 * Return: Alwayes char.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	unsigned int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
		if (*(s + i) == *(accept + j))
		{
			count = count + 1;
		}
	}
if (count != (i + 1))
	break;
}
	return (count);
}
