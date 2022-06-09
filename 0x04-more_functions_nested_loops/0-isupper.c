#include "main.h"

/**
 * _isupper - check the code if it is upper
 * @c: An input character
 * Return: Always 1 is c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';

	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
