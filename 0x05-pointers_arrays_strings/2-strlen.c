#include "main.h"

/**
 * _strlen - function to return the lenght of a string
 * @s: the string
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght])
		lenght++;

		return (lenght);
}
