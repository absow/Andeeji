#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	if (isupper(c))
	{
		_putchar("%d\n", 1);
	}
	else
	{
		_putchar("%d\n", 0);
	}
	return (0);
}
