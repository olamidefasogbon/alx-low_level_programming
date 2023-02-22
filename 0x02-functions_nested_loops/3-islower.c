#include "main.h"
/**
 * _islower - checks code for lower case alphabets
 *
 * @c: function member/parameter/placeholder
 *
 * Return: 1 (if check is a success) and 0 (if code fails)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
