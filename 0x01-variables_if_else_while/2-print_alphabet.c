#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet letters
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char X = 'a';

	while (X <= 'z')
	{putchar(X);
	X++;
	}
	putchar('\n');
	return (0);
}
