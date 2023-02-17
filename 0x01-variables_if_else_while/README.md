# 0x01. C - Variables, if, else, while

The following programs were applied to this project. 

## Task 0

Complete the source code in order to print whether the number stored in the variable **n** is positive or negative.

```
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Print n as positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	  
	return (0);
}
```
