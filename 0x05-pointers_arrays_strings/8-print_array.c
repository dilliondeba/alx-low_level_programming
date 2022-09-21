#include "main.h"
/**
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Return: 0
 */

void print_array(iint *a, int n)

{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}

		i++;
	}

	printf("\n")
		;
}
