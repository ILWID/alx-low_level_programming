#include "main.h"

/**
 * _isupper - checks if it is a upperharcater or not
 * @c: charcater to be tested
 * Return: 1 weather it is , 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
