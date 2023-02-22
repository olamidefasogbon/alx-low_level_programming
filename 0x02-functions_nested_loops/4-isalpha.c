#include "main.h"
/**
 * _isalpha - check if the inout is an aplhabet
 *
 * @c: function parameter
 *
 * Return: 1 (if it's an aplhabet) and 0 (if otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
