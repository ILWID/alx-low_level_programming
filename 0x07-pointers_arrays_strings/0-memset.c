#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: bytes of the memory
 *
 * Return: nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
