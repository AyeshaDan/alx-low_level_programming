#include "main.h"
/**
* _isalpha - the function to check for alphabetic character
* @c: The value checked for alphabetic parameter
* Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);

}
