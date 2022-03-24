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
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	dest[i] = '\0';
	return (dest);
}
