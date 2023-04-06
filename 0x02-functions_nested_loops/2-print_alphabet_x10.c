#include "main.h"

/**
 *print_alphabet_10_times-in_lowcase
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (a = 0; a <= 9; a++)
			_putchar(c);
	}
	_putchar('\n');
}
