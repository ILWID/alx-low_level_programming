#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: the destination charcter
 * @src: the source character
 * @n: the integer of number
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
