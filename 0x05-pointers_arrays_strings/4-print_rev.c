#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string character
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
