#include "main.h"

/**
 * index - retrns last index of a string
 * @s: string pointer
 *
 * Return: int
 */

int index(char *s)
{
	int a = 0;

	if (*s > '\0')
	{
		a += index(s + 1) + 1;
	}
	return (a);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: 1 if string is palindrome else 0
 */

int is_palindrome(char *s)
{

