#include "main.h"

/**
 * *_strdup - a function that dublicates a string
 * @str: input string to duplicate
 * Return: 1
 */

char *_strdup(char *str)
{
	int i = 0, 1 = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[1] != '\0')
		1++;

	s = malloc((1 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
