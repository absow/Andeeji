#include "main.h"


/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
void print_alpahbet_x10(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}
