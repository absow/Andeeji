#include <stdio.h>
#include "dog.h"

/**
 * main - creating main function
 * Return: 0 (Succes)
 * @void: stop it from returning
 */

int main(void)
{
	struct dog my_dog = {"Musa", 5.5, "kiddi"};
	struct dog *ptr = & my_dog;
	printf("%s %s %f\n", ptr->owner, ptr->name, ptr->age);
	return (0);
}
