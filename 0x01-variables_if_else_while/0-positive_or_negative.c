#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - main input
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /	2;
	if (n > 0)
       	{
		printf("is positive");
	}
	else if (n < 0) 
	{
		printf("is nagative");
	}
	else {
		printf("is zero");
	}
	return (0);
}
