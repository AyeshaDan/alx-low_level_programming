#include <stdio.h>
/**
* main - Print lowercase alphabet in reverse, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	char rev_letter = 'z';

	while (rev_letter >= 'a')
	{
		putchar(rev_letter);
		rev_letter--;
	}

	putchar('\n');

	return (0);
}
