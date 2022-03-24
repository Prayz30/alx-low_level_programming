#include "main.h"
/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 * Return: *s
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		*s -= 32;
		s++;
	}

	return (start);
}
