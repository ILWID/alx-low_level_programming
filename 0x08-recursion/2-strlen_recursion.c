#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: - string character
 *
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_putchar(_strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
