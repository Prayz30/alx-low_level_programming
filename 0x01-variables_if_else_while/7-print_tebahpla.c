#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints the lowercase alphabet in reverse
 * followed by a new line.
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
