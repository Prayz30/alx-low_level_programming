#include <stdio.h>
/**
 * main - main block
 * Description - Write a program that prints all possible combinations
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar four times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
