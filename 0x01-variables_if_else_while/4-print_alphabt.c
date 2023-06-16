#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all alphabet in lowercase except q and e
 *
 * Return: 0 (Seccess)
*/

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
