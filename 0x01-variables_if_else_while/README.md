# 0x01. C - Variables, if, else, while

The following programs were applied to this project. 

## Task 0. Positive anything is better than negative nothing

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

## Task 1. The last digit - INCOMPLETE

## Task 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

Write a program that prints the alphabet in lowercase, followed by a new line.

```
#include <stdio.h>
/**
* main - Print the alphabet in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
```

## Task 3. alphABET

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

```
#include <stdio.h>
/**
* main - Print the alphabet in lowercase and uppercase, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	char lowercase_letter = 'a';
	char uppercase_letter = 'A';

	while (lowercase_letter <= 'z')
	{
		putchar(lowercase_letter);
		lowercase_letter++;
	}

	while (uppercase_letter <= 'Z')
	{
		putchar(uppercase_letter);
		uppercase_letter++;
	}

	putchar('\n');

	return (0);
}
```

## Task 4. When I was having that alphabet soup, I never thought that it would pay off

Write a program that prints the alphabet in lowercase, except q and e, followed by a new line.

```
#include <stdio.h>
/**
* main - Print alphabet in lowercase, excluding q and e, with a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	char lowercase_letter = 'a';

	while (lowercase_letter <= 'z')
	{
		if (lowercase_letter == 'q' || lowercase_letter == 'e')
		{
		lowercase_letter++;
		continue;
		}
		putchar(lowercase_letter);
		lowercase_letter++;
	}

	putchar('\n');

	return (0);
}
```

## Task 5. Numbers

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

```
#include <stdio.h>
/**
* main - Print single digit numbers of base 10 from 0, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int single_dig = '0';

	while (single_dig <= '9')
	{
		putchar(single_dig);
		single_dig++;
	}

	putchar('\n');

	return (0);
}
```

## Task 6. Numberz

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

Same code as above. 

## Task 7. Smile in the mirror

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

```
#include <stdio.h>
/**
* main - Print lowercase alphabet in reverse, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	char rev_letter = 'z';

	while (rev_letter >= 'a')
	{
		putchar(rev_letter);
		rev_letter--;
	}

	putchar('\n');

	return (0);
}
```

## Task 8. Hexadecimal

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

```
#include <stdio.h>
/**
* main - Print numbers of base 16 in lowercase, followed by a new line.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int dig = '0';
	int letter = 'a';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
```

## Task 9. Patience, persistence and perspiration make an unbeatable combination for success

Write a program that prints all possible combinations of single-digit numbers. Numbers must be separated by a comma followed by a space.

```
#include <stdio.h>
/**
* main - Print  all possible combinations of single-digit numbers.
*
* Return: Value 0 means succesful execution of main() function.
*/
int main(void)
{
	int dig = '0';

	while (dig <= '9')
	{
		putchar(dig);

		if (dig != '9')
		{
			putchar(',');
			putchar(' ');
		}

		dig++;
	}

	putchar('\n');

	return (0);
}
```


