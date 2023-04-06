#include "main.h"
/**
 * _strlen_recursion - Returns the lengh of a string.
 * @s: The string to be measured.
 *
 * Return: The lengh of the string.
 */
int_strlen_recursion(char*s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
