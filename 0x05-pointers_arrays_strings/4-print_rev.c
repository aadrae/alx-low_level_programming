#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s : char to check
 * return: void
 */

void print_rev(char *s)
{
	int a = 0, i;

	while (s[a] != '\0')
	{
		a++;
	}
	for (i = a; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
