#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If @n is 0, returns 0.
 *         Otherwise, returns the sum of all parameters.
 *
 * Description: This function takes a variable number of arguments and returns
 * the sum of all the integers. It uses the va_list and va_start macros from
 * <stdarg.h> to access the variable arguments. The sum is calculated by
 * iterating over each argument using va_arg macro and adding them together.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
