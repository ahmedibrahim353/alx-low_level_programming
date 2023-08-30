#include"main.h"
/**
 * *_strchr - locates a character in a string.
 * @s: a pointer to char input.
 * @c: a char input.
 * Return: Alwayes char.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			break;
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
