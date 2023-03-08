#include "main.h"

/**
* puts_recursion - Prints a string followed by a new line
* @s: pointer to string
* Return: Void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return 0;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
