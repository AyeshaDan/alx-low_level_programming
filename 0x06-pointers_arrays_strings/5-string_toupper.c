#include "main.h"
/**
* string_toupper - Change all lowercase letters of a string to uppercase
* Return: Uppercase string
*/
char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		ptr[i] = (int)ptr[i] - 32;
	}
	return (ptr);
}
