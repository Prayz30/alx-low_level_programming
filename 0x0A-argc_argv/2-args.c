#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
