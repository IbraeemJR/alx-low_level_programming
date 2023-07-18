#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer
 * @name: The string to be printed
 * @f: A pointer to a function that takes a character pointer as an argument
 *
 * Description: This function takes a string 'name' and a function pointer 'f'.
 * If both 'name' and 'f' are not NULL, the function calls the function 'f'
 * and passes the 'name' as an argument. The function 'f' is expected to print
 * or perform some action on the input 'name'.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
