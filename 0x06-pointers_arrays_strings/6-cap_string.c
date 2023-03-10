#include "main.h"
/**
* cap_string - capitalizes all words of a string
* Return: Capitalized string
*/
char *cap_string(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
			continue;
		}
		if (ptr[i] == ' ' || ptr[i] == ',' || ptr[i] == ';' || ptr[i] == '.' || ptr[i] == '!' || ptr[i] == '?' || ptr[i] == '"' || ptr[i] == '(' || ptr[i] == ')' || ptr[i] == '{' || ptr[i] == '}')
		{
			++i;

			if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				ptr[i] = ptr[i] - 32;
				continue;
			}
		}
		else
		{
			if (ptr[i] >= 'A' && ptr[i] <= 'Z')
				ptr[i] = ptr[i] + 32;
		}
	}
	return (ptr);
}
