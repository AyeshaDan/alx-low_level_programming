#include "main.h"
/**
* _memcpy - copies n bytes from memory area
* @dest: memory area
* @src: memory area
* @n: number of bytes
* Return: the value of dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
