#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string character
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
