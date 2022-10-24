#include "main.h"

/**
 * puts_half -  function that prints half of a string.
 * @str: string point
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		putchar(*str);
		i++;
	}
}
