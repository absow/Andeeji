#include "main.h"
#include <stdio.h>
/**
 * main - printing all the augmnet entered with ne line
 * @argc: argumnet count
 * @argv: argumnet vector
 * Return: 0 (Success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
