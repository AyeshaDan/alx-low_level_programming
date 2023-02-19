#include <stdio.h>
/**
* main - Print  all possible combinations of single-digit numbers.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int dig = '0';

	while (dig <= '9')
	{
		putchar(dig);

		if (dig != '9')
		{
			putchar(',');
			putchar(' ');
		}

		dig++;
	}

	putchar('\n');

	return (0);
}
