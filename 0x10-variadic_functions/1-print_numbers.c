#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print number followed by new line
 *
 * @separator: string pointer
 *
 * @n: start of input var
 *
 * Return: nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum = va_arg(ap, unsigned int);

			printf("%d", sum);

			if (i < n - 1 && separator != NULL)

				printf("%s", separator);
		}

		printf("\n");

		va_end(ap);
}
