#include "main.h"

/**
* _puts_recursion - uses recursion
* @s: string to recurse through
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	else
		putchar('\n');
}
