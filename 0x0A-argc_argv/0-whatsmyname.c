#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * main - the main and taking 2 auguments
 * @argc: counter augument
 * @argv: vector augument
 * Return: 0 (Success)
 */
	
int main(int argc, char **argv)
{
	int count = 0;

	if (argc > 1)
	{
		count++;
		printf("%s\n", argv[count]);
	}
	else
	{
		printf("%d\n", *argv);
	}
	return (0);
}
