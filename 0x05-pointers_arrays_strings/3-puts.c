#include "main.h"
/**
 * _puts - print a strings
 * @str: string
 * Return: 0 Always
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
