#include "palindrome.h"

/**
 * is_palindrome - holb
 * @n: int
 *
 * Return: 0
 */
int is_palindrome(unsigned long n)
{
	int s = 0, tmp, r;

	tmp = n;
	while (n > 0)
	{
		r = n % 10;
		s = (s * 10) + r;
		n /= 10;
	}
	if (tmp == s)
		return (1);
	else
		return (0);
}
