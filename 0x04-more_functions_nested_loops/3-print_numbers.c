#include "main.h"


/**
 * print_numbers - rints the numbers, from 0 to 9, followed by a new line
 * Return: always 0
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n < '10'; n++)
		_putchar (n);
	_putchar ('/n');
}
