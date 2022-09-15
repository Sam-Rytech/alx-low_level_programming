#include "main.h"

/**
* _isdigit - checks for a digit
* @c: tested character
* Return: if it is a digit return 1, otherwise return 0
*/

int _isdigit(char c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
