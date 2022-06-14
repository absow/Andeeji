#include "main.h"
/**
 * swap_int - swapping the value of two variable
 * @a: pointer a
 * @b: pointer b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x = *b;
	int y = *a;
	*b = y;
	*a = x;
}

