#include "main.h"
/**
 *_puts_recursion - function prints a string using recursion like puts();
 *@s: indicates string parameter or argument
 *Return: always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
		_putchar('\n');
}
