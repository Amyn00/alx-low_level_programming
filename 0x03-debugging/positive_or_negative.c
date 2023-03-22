#include "main.h"

/**
 * positive_or_negative - number are pos or neg
 *
 * @i: test the number if pos or neg
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
