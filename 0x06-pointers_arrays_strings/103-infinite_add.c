#include "main.h"

/**
 * infinite_add - write a func that adds two num
 *
 * @n1: input 1
 * @n2: input 2
 * @r: input 3
 * @size_r: input 4
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d, e, sum, digit, digit1, rem, num;

	a = b = c = d = e = sum = digit = digit1 = rem = num = 0;
	while (n1[a] != 0)
		a++;
	while (n2[b] != 0)
		b++;
	if ((a + 2) > size_r || (b + 2) > size_r)
		return (0);
	a -= 1;
	b -= 1;
	for (; a >= 0 || b >= 0;)
	{
		digit = digit1 = 0;
		if (a >= 0)
			digit = n1[a--] - '0';
		if (b >= 0)
			digit1 = n2[b--] - '0';
		sum = digit + digit1 + rem;
		if (sum > 9)
		{
			rem = 1;
			sum -= 10;
		}
		else
			rem = 0;
		r[c++] = (sum + '0');
	}
	if (rem == 1)
		r[c++] = (1 + '0');
	d = c;
	c -= 1;
	for (e = 0; e < c; e++, c--)
	{
		num = r[c];
		r[c] = r[e];
		r[e] = num;
	}
	r[d] = '\0';
	return (r);
}
