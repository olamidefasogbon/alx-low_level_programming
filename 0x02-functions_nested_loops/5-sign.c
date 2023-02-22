#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints signs
 * @n: function parameter
 * Return: 1, -1, 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
