#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly
 * follow by a new line
 * Return: Always 0 (Succes)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
