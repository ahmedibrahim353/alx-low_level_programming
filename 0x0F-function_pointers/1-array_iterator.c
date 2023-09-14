#include<stdio.h>


/**
 * array_iterator - print array with a function
 *
 * @array: array pointer
 *
 * @size: array element
 *
 * @action: formating functions
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array && size && action)

		for (i = 0; i < size; i++)
			(*action)(array[i]);

}
