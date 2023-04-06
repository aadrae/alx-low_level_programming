#include "main.h"

/**
 *print_alphabet_x1-0print_alphabet_10_times-in_lowcase
 */

void print_alphabet_x10(void)
{
	char a;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
	}
	_putchar('\n');
}
