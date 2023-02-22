#include "main.h"
/**
* _islower - Check for lowercase character
*
* Return: 1 if c is lowercase, 0 otherwise
*
* c - should return 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
