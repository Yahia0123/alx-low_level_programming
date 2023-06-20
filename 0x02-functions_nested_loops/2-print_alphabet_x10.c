#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
  * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int X, ch;

	for (X = 1; X <= 10; X++)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	}
}
