#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Print the last digit of the number stored in the variable n.
*
* Return: Value 0 means successful execution of main() function.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n);
	}
	if (n <= 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
	}

	return (0);
}