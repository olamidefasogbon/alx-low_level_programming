#include <stdio.h>
/**
 * main - prints all single digits of base 10 starting from 0, then a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
