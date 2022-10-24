#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string pointer
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
