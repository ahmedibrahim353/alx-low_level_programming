#include"main.h"
#include<string.h>

/** main - print char string
 *
 *@s: string to print
 *
 * Return: string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)

		i++;

		return (i);
}
