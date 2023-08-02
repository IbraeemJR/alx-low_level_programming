#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a function.
 * @function_ptr: Pointer to the function whose opcodes to print.
 * @num_bytes: Number of bytes to print.
 */
void print_opcodes(void *function_ptr, int num_bytes)
{
	unsigned char *opcodes = (unsigned char *)function_ptr;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
			printf("%02hhx\n", opcodes[i]);
		else
			printf("%02hhx ", opcodes[i]);
	}
}

/**
 * main - Prints its own opcodes.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error: Usage: %s <number_of_bytes>\n", argv[0]);
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error: The number of bytes must be a positive integer.\n");
		return (2);
	}

	/* Using the main function address to print its own opcodes */
	print_opcodes((void *)main, bytes);

	return (0);
}
