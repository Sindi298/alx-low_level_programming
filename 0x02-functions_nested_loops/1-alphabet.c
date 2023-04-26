#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print all alphabet in lowercase
*/
void print_alphabet(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
	_putchar(letters);
}
_putchar('\n');

}
