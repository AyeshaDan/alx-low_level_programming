#include "main.h"
/**
* _strcmp - compares two strings
* @s1: string one
* @s2: string two
* Return: Negative, zero or positive if s1 is less than, equal to, or greater than s2
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}

	return s1[i] - s2[i];
}
