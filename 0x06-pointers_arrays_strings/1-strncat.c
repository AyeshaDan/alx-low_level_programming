#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: string one
* @src: string two
* @n: Number of bytes
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}

	while (n-- > 0 && *src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
