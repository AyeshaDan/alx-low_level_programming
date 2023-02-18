#include <stdio.h>
/**
* main - Print single digit numbers of base 10 from 0, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int single_dig = '0';

	while (single_dig <= '9')
	{
		putchar(single_dig);
		single_dig++;
	}

	putchar('\n');

	return (0);
}
