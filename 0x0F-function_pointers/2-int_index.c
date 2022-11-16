#include "function_pointer.h"

/**
 * int_index - returns the index of the first element for
 * which the cmp function does not return 0
 * @cmp:  is a pointer to the function to be used to compare values
 * @size: is the number of elements in the array array
 * @array: the array
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		return  (index);
	}
	return (-1);
}
