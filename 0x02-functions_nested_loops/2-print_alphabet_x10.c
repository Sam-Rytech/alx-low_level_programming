#include "main.h"

/**
 * main - Print alphabet in lowercase 10 times
 *
 * Return: always return 0
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; i <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
