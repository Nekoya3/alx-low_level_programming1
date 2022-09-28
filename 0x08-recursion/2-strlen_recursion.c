#include "main.h"

/**
 * _strlen_recursion - prints the klength of a string
 * @s: string to prints it's length
 *
 * Return: - length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
