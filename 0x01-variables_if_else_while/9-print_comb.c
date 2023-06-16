#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, 2, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(ch + 48);
		if (ch != 9)
		{
		putchar(',');
		putchar(' ');
		}
	ch++;
	}
	putchar('\n');
	return (0);
}
