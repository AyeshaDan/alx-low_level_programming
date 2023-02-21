#include <stdio.h>
#include "main.h"
/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution.
*/

int main()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
