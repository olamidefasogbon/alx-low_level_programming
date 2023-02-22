#include "main.h"

/**
 * times_table - function that  prints 9 times table
 */

void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			p = i * j;
			if (p <= 9)
			{
				_putchar(p / 10 + '0'); /* prints tens digit */
			}
			else
			{
				_putchar(p / 10 + '0'); /* prints tens digit */
				_putchar(p % 10 + '0'); /* prints ones digit */
			}
			if (j >= 9)
			{
				_putchar('$');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
