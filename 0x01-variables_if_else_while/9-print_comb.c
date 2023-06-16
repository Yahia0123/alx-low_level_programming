#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0, 1, 2, 3, ..., 9
 *
 * return: 0 (Success)
*/

int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(ch + '0');
		if (ch == 9){
		putchar(',');
		putchar(' ');
		}
	ch++;
	}
	putchar('\n');
	return (0);
}
