#include "main.h"

/**
* _isdigit - Check if number are 0 - 9
* @c: Character to be checked
* Return: 0 or 1
*/

int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
