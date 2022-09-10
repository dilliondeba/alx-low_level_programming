#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)/*this is the main function*/
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'q' && al != 'e')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');

	return (0);
}
