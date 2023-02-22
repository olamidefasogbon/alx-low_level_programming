#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function that prints times table of n
 *
 * @n: function parameter
 *
 * Return: reuquired output or null (success)
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}
}
