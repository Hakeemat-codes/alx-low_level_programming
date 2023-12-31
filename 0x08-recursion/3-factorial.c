#include "main.h"

/**
 * factorial - If n is lower than 0,
 * the function should return -1 to indicate an error
 * @n: function parameter
 * Return: given factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
