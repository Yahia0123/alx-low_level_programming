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
	int ch = 0;

	while (ch < 10)
	{
		if (ch != 9){
		putchar(ch);
		}
	putchar(ch + '0');
	putchar(',');
	putchar(' ');
	ch++;
	}
	return (0);
}
