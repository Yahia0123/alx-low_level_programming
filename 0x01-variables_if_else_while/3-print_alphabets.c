#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char X = 'a';
	char Y = 'A';

	while (X <= 'z')
	{
		putchar(X);
		X++;
	}
	while (Y <= 'Z')
	{
		putchar(Y);
		Y++;
	}
	putchar('\n');
	return (0);
}
