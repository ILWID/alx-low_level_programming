#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: ubstring character
 * @accept: consist of bytes in the initial segment
 *
 * Return: nothing
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
