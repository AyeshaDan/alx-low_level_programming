#include "main.h"
/**
* swap_int - function to swap two values of integers
* @a: pointer to the first integer
* @b: pointer to the second integer
* Return: void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
