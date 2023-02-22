#include "main.h"
/**
* main - Print the alphabet in lowercase 10 times, followed by a new line.
*
* Return: Value 0 means succesful execution.
*/

int main(void)
{
	int i = 0;
	char c;

	while(i<10)
	{
		c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

	putchar('\n');
	i++;
}

	return (0);
}
