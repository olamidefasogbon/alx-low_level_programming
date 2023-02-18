#include <stdio.h>
/**
 * main - prints alpahbet in lowercase except e and q, followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
