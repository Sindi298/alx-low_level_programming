#include "main.h"
#include <stdio.h>
#define MAXSTRING 80
/**
 * main - print _putchar
 * Description: 'prints _putchar followed by a new line'
 * Return:  0
 */
int main(void)
{
char str[100] = "_putchar";
int i;
for (i = 0; i < MAXSTRING; i++)
{
putchar(str[i]);
putchar('\n');
}
return (0);
}
