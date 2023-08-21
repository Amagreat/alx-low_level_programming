#include "main.h"
/**
 * print_rev - prints the content of the file on reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;

	}


	for (i = length - i; i >= 0; i--)
	{
		-putchar(s[i]);

	}

	_putchar('\n');
}
