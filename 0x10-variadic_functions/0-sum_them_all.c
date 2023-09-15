#include <stdarg.h>

/**
 * sum_them_all - function of sum variables
 *
 * @n: start of int var
 *
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);

	va_end(ap);

	return (sum);
}
