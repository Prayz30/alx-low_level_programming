#include "main.h"
/**
 * _isupper - function that checks for uppercase characters
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int _isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			_isupper = 1;
			break;
		}
	}
	return (_isupper);
}
