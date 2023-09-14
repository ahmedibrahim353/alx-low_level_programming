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
	[long | unsigned | int] i;

	if (array && size)

		for (i = 0; i < size; i++)
			(*action)(array[i]);

}
