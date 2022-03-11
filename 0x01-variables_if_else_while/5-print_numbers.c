#include <stdio.h>
/**
 * main - main block
 * Description - Write a program that prints all single digit
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}

	putchar('\n');

	return (0);
}
