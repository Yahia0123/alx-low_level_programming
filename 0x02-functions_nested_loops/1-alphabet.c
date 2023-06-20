#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: Always (0) (Success)
*/

int main(void)
{
	char ch = 'a';

	putchar(ch);
	ch++;
		putchar('\n');
	print_alphabet(0);
}
