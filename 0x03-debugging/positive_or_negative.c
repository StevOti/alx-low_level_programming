#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive, negative, or zero
 * @i: The integer to be checked.
 *
 * This function checks the value of the integer 'i' and prints whether it is
 * positive, negative, or zero.
 */

void positive_or_negative(int i)
{
	if (i > 0)
	printf("%d is positive\n", i);

	else if (i == 0)
	printf("%d is zero\n", i);

	else
	printf("%d is negative\n", i);
}
