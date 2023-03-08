#include "main.h"

/**
* Main - Entry point
* _puts_recursion - Prints a string, followed by a new line.
* @s: The string to be printed.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
