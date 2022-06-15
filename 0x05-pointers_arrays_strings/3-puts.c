#include "main.h"
/**
 * _puts - prints a strings
 * @str: string
 * Return: void
 */

void puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
