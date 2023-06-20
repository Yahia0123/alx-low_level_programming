#include "main.h"
/**
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a - z
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: Always (0) (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
