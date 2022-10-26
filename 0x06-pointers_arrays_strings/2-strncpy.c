#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the string destination character
 * @src: the string source character
 * @n: the number of integer character
 *
 * Return: nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
