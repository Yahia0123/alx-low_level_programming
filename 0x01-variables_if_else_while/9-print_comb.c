#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 * 		Numbers must be separated by ,, followed by a space
 *
 * return: 0 (Success)
*/

int main(void)
{
	int ch = 1;

	while (ch < 10)
	{
	putchar(ch + '0');
	putchar(',');
	putchar(' ');
	ch++;
	}
	putchar('\n');
	return (0);
}
