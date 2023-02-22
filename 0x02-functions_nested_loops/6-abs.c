#include "main.h"
#include <stdio.h>
/**
 * _abs - function
 *
 * @a: function parameter
 *
 * Return: a (success)
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
