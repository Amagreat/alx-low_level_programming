#include <stdio.h>

/**
 * rot13 - Encoder using the ROT13 cipher
 * @s: Pointer to the input string
 *
 * Return: Pointer to modified string
 *
 */

char *rot13(char *s)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		j = 0;
		while (j < 52 && s[i] != data[j])
		{
			j++;
		}

		if (j < 52)
		{
			s[i] = datarot[j];
		}
	}
	return (s);
}
