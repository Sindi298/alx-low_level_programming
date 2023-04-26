#include "main.h"
#include <stdio.h>
/**
 * main - Initialising for loop with alphabet
 * Description: the alphabet, in lowercase, followed by a new line
 * Return: 0
*/
int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
{
putchar(letters);
}
putchar('\n');
return (0);
}
