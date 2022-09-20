#include "main.h"
/**
 * print_rev - prints a strin in reverse
 * @s; string parameter input
 *Return: 0
 */
void print rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
