#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c : is the character checked
 *Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
