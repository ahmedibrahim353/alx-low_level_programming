#include<stdio.h>

/**
 * main - check the code
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);

}
