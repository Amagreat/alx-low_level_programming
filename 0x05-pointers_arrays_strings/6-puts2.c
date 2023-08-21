#include "main.h"

/**
 * puts2 - prints every other character
 * starting with the first character
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		length++;
	}

	for (o = 0; o < length; o += 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}

