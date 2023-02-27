#include "main.h"
/**
* print_rev -  prints a string in reverse, followed by new line
* @s: pointer to string
* Return: void
*/
void print_rev(char *s)
{
	int i, len, temp;
	len = _strlen(s);

	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

	char str[50];
	get(str);

	print_rev(str)

	_putchar('\n');
}
