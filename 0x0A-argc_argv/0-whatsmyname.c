#include "main.h"
#include <stdlib.h>

/**
 * main - the main and taking 2 auguments
 * @argc: counter augument
 * @argv: vector augument
 * Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
