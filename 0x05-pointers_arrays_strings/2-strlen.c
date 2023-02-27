#include "main.h"
/**
* _strlen - function to return length of string
* @s: pointer to string
* Return: int value that represents length of string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
