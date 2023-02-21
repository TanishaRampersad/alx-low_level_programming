#include "main.h"

/**
* _isalpha - Checks for alphabetic characters
* @c: The character to be checked
* Return: 1 for letters that are lowercase or uppercase, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
