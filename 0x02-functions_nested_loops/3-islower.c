#include "main.h"

/**
* _islower - Checks for lowercase character
* @c: the character
* Return: 1 for lowercase character, 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
