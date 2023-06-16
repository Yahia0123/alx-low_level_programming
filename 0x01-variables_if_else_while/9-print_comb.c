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
		if (ch == 9){
		putchar(ch);
		}
	putchar(ch + '0');
	putchar(',');
	putchar(' ');
	ch++;
	}
	return (0);
}
