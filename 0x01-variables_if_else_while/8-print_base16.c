#include <stdio.h>

/**
 * main - This will print hexadecimal
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
