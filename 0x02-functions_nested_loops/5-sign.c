#include "main.h"

/**
 * print_sign - function to print sign of number
 *
 * @n:int is use for the argument of the function
 * Description: using the print_sign
 * Return: 1 if the number is greater than zero
 * 0 if the numner is zero
 * -1 if it is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
