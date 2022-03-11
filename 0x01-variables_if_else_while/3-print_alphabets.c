#include <stdio.h>
/**
 * main - main
 * Description - Write a program that prints the alphabet
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
		purchar(c);
		c++;
	}

	purchar('\n');

	return (0);
}
