#include "main.h"
#include <stdio.h>

int main(void)
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";
    int cmp;

    printf("Before concatenation: %s\n", str1);

    _strcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    cmp = _strcmp("abc", "def");
    printf("Comparison result: %d\n", cmp);

    return (0);
}
