#include "main.h"
/**
* _strncpy - copies a string
* @dest: string one
* @src: string two
* @n: Number of bytes
* Return: A pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	_strncpy(dest, src, n);
	dest[n] = '\0';
	return (dest);
}
