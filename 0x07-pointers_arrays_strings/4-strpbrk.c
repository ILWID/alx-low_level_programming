#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string charcter
 * @accept: character that matches one of the bytes
 *
 * Return: nothing
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
