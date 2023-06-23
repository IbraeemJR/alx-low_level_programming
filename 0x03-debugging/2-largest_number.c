#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, largest;

	a = 0;
	b = 0;
	largest = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a > b)
		largest = a;
	else
		largest = b;

	printf("The largest number is: %d\n", largest);

	return (0);
}
