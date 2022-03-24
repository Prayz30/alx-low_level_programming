#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: input parameters for character
 * @src: input parameters for character
 * @n: input integer
 * Return: Return to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
