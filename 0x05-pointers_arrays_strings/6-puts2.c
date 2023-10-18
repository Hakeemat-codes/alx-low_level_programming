#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int b = 0;
	char *c = str;
	int m;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	b = longi - 1;
	for (m = 0 ; m <= b ; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');

}
