#include "main.h"
/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int n)
{
	if (n % 2 != 0 && n != 1 && n > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
