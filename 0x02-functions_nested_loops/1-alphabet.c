#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the alphabet, in lowercase
 *
 * Return: Always (0) (Success)
*/

int _putchar(char c)
{
	char ch;
	
	for(ch = 'a', ch <= 'z', ch++)
	_putchar(ch);
	_putchar('\n');
}
