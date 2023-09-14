#include<stdio.h>

/**
 * print_name - print name with a function
 *
 *@name: name
 *
 *@f: formating functions
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
