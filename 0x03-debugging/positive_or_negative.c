#include "main.h"

/**
 * positive_or_negative - tests if the required input is postive or negative
 *
 * @i: function parameter
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
