#include <stdio.h>
/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means successful execution of main() function.
*/
int main(void)
{
	char ch = 'a';

	for (int b = 0; b < 26; b++)
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
