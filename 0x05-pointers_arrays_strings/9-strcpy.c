#include "main.h"
/**
 * _strcpy - copies the string pointed to the src
 * @dest: A pointer to a char
 * @src: A pointer to a char
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
