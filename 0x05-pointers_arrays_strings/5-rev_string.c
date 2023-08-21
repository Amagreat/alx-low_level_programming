 #include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reserved
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char n;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		n = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = n;
	}
}
