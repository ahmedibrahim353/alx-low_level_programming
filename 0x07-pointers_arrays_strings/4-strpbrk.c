#include"main.h"
/**
 * *_strpbrk - function that searches a string.
 * @s: char input as a pointer.
 * @accept: char input as a pointer.
 * Return: Alwayes char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count = count + 1;
				break;
			}
		}
		if (count == 1)
			break;
	}
	if (count == 1)
		return (s + i);
	return (NULL);
}
