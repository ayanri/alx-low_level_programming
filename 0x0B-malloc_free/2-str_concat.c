#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;

	c = a + b;
	s = (char *)malloc(c * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	b = 0;
	while (d < c)
	{
		if (d < a)
			s[d] = s1[d];
		if (d >= a)
		{
			s[d] = s2[b];
			b++;
		}
		d++;
	}
	s[d] = '\0';
	return (s);
}
