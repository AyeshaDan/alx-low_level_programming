# 0x00. C - Hello, World

The following outlines all the script answers for the 0x00. C - Hello, World project. 

## Script Usage

1. `gcc -E $CFILE -o c`

      Use `gcc -E` command to access preprocessor only for the variable `$CFILE`. 
      Use `-o` to save output into another file named `c`.


2. `gcc -c $CFILE`

      Use `gcc -c` command to run `$CFILE` without linking. 


3. `gcc -S $CFILE`

      Use `gcc -S` command to run `$CFILE` without assembling. This will generate an assembler code.
 
 
4. `gcc $CFILE -o cisfun`

      Use `gcc` command to run `$CFILE` fully. Use `-o` to save executable file as `cisfun`.
      

## C Program scripts

### Task 1
Write a C Program using the `puts` command to prints exactly **"Programming is like building a multilingual puzzle**, followed by a new line.

Step 1: Create a file with the `cat` command. Type `cat > filename.c` in Sandbox. This will open an editor to input below C code.

```
#include <stdio.h>
/**
* main - Print "\"Programming is like building a multilingual puzzle"
*
* Return: Value 0 means successful execution of main() function.
*/
int main(void)
{
	/**
	* puts function display the content in double quotes
	*/
	char Printxt[] = "\"Programming is like building a multilingual puzzle";

	puts(Printxt); /* writing the string to stdout */

	return (0);
}
```
Exit and compile the code with `gcc filename.c`, followed  by `./a.out`.

### Task 2
Write a C Program using the `printf` command to print exactly **with proper grammar, but the outcome is a piece of art,**, followed by a new line.

Step 1: Create a file with the `cat` command. Type `cat > filename.c` in Sandbox. This will open an editor to input below C code.

```
#include <stdio.h>
/**
* main - Print "with proper grammar, but the outcome is a piece of art,"
*
* Return: Value 0 means successful execution of main() function.
*/
int main(void)
{
	/**
	* printf function display the content in double quotes
	*/
	printf("with proper grammar, but the outcome is a piece of art,\n");

	return (0);
}
```
Exit and compile the code with `gcc filename.c`, followed  by `./a.out`.

## Resources
1. C Programming
	[https://blog.ehoneahobed.com/tag/c-programming](url)
	[https://man7.org/linux/man-pages/man1/gcc.1.html](url)
	
2. `Puts` Function
	[https://www.digitalocean.com/community/tutorials/puts-function-c-plus-plus](url)

3. `Printf` Function
	[https://www.w3schools.com/c/c_syntax.php](url)
	
4. Data Types

   [https://linuxhint.com/find-size-int-float-basic-variables-c/](url)
   [https://www.geeksforgeeks.org/data-types-in-c/](url)
   [https://www.scaler.com/topics/c/format-specifiers-in-c/](url)
   [https://www.simplilearn.com/tutorials/c-tutorial/format-specifiers-in-c](url)



