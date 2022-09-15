#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * return 0
 */

int _putchar(char c)
{

		return (write(1, &c, 1));
		return (0);

}
