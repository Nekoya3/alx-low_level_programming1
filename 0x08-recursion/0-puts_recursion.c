#include "main.h"

/**
 * _puts_recursion - prints a string without using a loop
 * @s: - the string to print
 *
 * return - always return 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
