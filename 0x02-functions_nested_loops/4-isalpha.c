#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 *
 * @c: is checks a letter, lowercase or uppercase
 *
 * Return: returns 1 if 'c' is a letter, lowercase or uppercase
 * otherwise Always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	return (0);
}
