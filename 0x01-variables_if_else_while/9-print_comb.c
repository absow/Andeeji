#include <stdio.h>
/**
 * main - display  all possible cominbations,
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
