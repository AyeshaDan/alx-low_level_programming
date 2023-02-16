#include <stdio.h>
/**
* main - Print size of various data types on computer
*
* Return: Value 0 means successful execution of main() function.
*/
int main(void)
{
	char charType;
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;

	/**
	* Sizeof operator is used to evaluate the size of a variable
	*/
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longintegerType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintegerType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

	return (0);
}
