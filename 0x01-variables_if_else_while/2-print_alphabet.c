#include <stdio.h>
/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means successful execution of main() function.
*/
int main(void)
{
	char letter = 'a';
	while (letter <= 'z') 
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
