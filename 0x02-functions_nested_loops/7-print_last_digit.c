#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @k: function parameter
 *
 * Return: k (success)
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -(k);
	return (k);
}
