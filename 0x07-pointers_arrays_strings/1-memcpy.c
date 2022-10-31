#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @n: bytes from memory
 * @src: source of size bytes
 * @dest: memory destination
 *
 * Return: nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
