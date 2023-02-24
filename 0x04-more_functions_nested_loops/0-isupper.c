#include "main.h"
/**
* _isupper - the function to check for uppercase
* @c: the value checked for uppercase
* Return: 1 if c is uppercase, 0 if otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
