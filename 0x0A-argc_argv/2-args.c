#include <stdio.h>
/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argc[])
{

	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argc[count]);
			count++;
		}
	}
	return (0);
}
