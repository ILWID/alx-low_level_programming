#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name character
 * @f: a pointer fuction that print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
}
