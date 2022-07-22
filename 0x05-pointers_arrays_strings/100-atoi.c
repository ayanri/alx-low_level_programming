#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: char type string
 * Return: Converted integer
 */

int _atoi(char *s)
{
	int sign = 1, resp = 0, Num;

	for (Num = 0; !(s[Num] >= 48 && s[Num] <= 57); Num++)
	{
		if (s[Num] == '-')
		{
			sign *= -1;
		}
	}

	for (int a = Num; s[a] >= 48 && s[a] <= 57; a++)
	{
		resp *= 10;
		resp += (s[a] - 48);
	}

	return (sign * resp);
}
