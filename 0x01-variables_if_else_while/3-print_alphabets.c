#include <stdio.h>
/**
 * main - main block
 * Description - Write a program that prints the alphabet in lowercase,
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	purchar ('\n);

	return (0);
}
