#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the first occurrence of the substring in the string
 * @needle: subtring character
 *
 * Return: nothing
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
