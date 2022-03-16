#include <main.h>
/**
 * main - main block
 * description - write a program that prints _putchar, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char *pb = "_putchar";

	while (*pb)
	{
		_putchar(*pb);
		pb++;
	}
	_putchar('\n');

return (0);
}
