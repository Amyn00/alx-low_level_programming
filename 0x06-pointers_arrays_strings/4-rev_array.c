#include "main.h"

/**
 * reverse_array - write a func that rev the content of an array
 * of int
 *
 * @a: input 1
 * @n: input 2
 */

void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
