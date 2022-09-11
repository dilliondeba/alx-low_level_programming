#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'a';
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	while (l <= 'f')
	{
		putchar('l');
		l++;
	}
	putchar('\n');

	return (0);
}
