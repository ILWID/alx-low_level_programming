#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: the first string character
 * @src: the second string character
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
