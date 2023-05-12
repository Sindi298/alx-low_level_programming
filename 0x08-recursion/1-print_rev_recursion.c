#include "main.h"
/**
 * _print_rev_recursion - Function Prints a sting in reverse.
 * @s: string parameter.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
