#include "main.h"

/**
 * int _islower - check for lowercase characters
 * @c: is the int that will use for the arguement of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
		return(0);
}
