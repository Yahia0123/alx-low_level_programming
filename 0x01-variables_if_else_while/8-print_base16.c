#include <stdio.h>

/**
 * main - entry point
 *
 * Description:prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int X = 48;

	while (X <= 102)
	{
	if (X == 57)
		X += 39;
		X++;
	}
	putchar('\n');
	return (0);
}
