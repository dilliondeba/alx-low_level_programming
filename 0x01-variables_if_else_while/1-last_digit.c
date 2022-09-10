#include <stdio.h>
#include <time.h>
#include <stdlib.h>

 /**
  * main - Entry point
  *
  * Description: print the value of n status
  * greater than, is zero and is not less than 6.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	/*my code*/
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}
