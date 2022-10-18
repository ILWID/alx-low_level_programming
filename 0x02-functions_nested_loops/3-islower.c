#include "main.h"

/**
*islower- function to check if c is lowercase
*
*@c: the character
*Description: using the _islower function
*this program prints "
*Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
