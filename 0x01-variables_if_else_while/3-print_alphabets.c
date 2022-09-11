#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowecase then in uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char al = 'a';
	char AL = 'A';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}

	while (AL <= 'Z')
	{
		putchar(AL);
		AL++;
	}

	putchar('\n');

	return (0);
}
