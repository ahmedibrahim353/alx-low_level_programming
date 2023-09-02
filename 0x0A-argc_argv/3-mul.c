#include<stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: argument count
 *
 * @argv: argument vevtor
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		sum = (atoi(argv[1]) * atoi(argv[2]));

		printf("%d\n", sum);
	}

	return (0);

}


