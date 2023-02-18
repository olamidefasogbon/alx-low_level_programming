#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;
	int first_pair = 1; /* flag set to true for first pair*/

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 99; j++)
		{
			if (first_pair)
			{
				first_pair = 0; /*set flag to false*/
			}
			else if (i != j)
			{
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
