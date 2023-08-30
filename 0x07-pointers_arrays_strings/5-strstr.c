#include"main.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack: pointer to char.
 * @needle: pointer to char.
 * Return: Alwayes char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int count = 0;
	int n = -1;
	int length;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0;; j++)
		{
			if (*(needle + j) == '\0')
			{
				n = j;
				break;
			}
			if (*(needle + j) == *(haystack + i + j))
			{
				count = count + 1;
			}
			else
			{
				count = 0;
				break;
			}
		}
		if (count == n)
		{
			length = i;
			break;
		}
	}
	if (count == n)
	{
		return ((haystack + length));
	}
	return (NULL);
}
