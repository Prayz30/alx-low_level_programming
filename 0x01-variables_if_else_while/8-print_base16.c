#include <stdio.h>
/**
 * main - main block
 * Description - Write a program that prints all the numbers of base 16 in lowe
 * you can only use putchar function
 * use only three times in this code
 * Return: 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
