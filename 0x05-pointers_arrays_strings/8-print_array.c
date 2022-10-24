#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: the array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], i != n - 1 ? "," : "");
	printf("\n");

}
