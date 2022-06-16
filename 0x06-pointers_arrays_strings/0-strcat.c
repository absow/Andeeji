
#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int n1 = 0;
	int n2 = 0;

	while (*(dest + n1) != '\0')
	{
		count++;
	}

	while (n2 >= 0)
	{
		*(desk + n1) = *(src + n2);
		if (*(src + n2) == '\0')
			break;
		n1++;
		n2++;
	}
	return (desk);
}
