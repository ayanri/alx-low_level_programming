#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: a character to be checked on
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
