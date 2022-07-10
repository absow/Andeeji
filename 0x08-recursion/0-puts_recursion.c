#include "main.h"
/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(S + 1);
	}
	else
	{
		_putchar('\n');
	}
}
