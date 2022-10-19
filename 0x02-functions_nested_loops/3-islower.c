#include "main.h"

/**
 * _islower - function that checks for lower character
 * @c: The input character to check
 * Return: 0 || 1 (success)
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
