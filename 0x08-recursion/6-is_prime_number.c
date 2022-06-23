#include "main.h"

/**
 * is_prime_number - checking if the number is 
 * Return 0 (success);
 */

int is_prime_number(int n)
{
	 prime(n);
	 event(n);
		
}

int prime(int n)
{
	if (n % 2 != 0)
	{
		_putchar("%d\n", 1);
		return;
	}
	else
	{
		even();
	}
}

int even(int n)
{
	if (n % 2 == 0)
	{
		_putchar("%d\n", 0);
		return;
	}
	else
	{
		prime();
	}
}
