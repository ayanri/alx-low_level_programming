#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int a = 0, b;
	char s[] = "AaEeOoTtLl";
	char s1[] = "4433007711";

	for (; str[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (s[b] == str[a])
			{
				str[a] == s1[b];
			}
		}
	}
	return (str);
}
