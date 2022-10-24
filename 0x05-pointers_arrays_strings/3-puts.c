#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: string pointer
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');

}
