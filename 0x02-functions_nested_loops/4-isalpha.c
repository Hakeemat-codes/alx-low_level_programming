#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}
