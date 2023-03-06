#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to the block of memory to fill
* @b: value to be set
* @n: number of bytes
* Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
