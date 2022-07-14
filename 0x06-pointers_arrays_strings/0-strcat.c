/**
 * _strcat - function that concatenates two strings
 * @dest: parameter to be appended to
 * @src: parameter to append to dest
 * n: maximum number of bytes usable
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] += src[b];
		a++;
		b++;
	}

	dest += '\0';

	return (dest);
}
