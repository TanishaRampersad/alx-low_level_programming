#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: character to be reversed
* Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

