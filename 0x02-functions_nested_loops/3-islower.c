#include "main.h"
/**
* _islower - the function to check for lowercase
* @c: The value checked for lowercase parameter
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
