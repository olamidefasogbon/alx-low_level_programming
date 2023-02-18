#include <stdio.h>
/**
 * main - prints alphabets in reverse order, then a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
