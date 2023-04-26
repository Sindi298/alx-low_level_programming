#include "main.h"
/**
 *  _isalpha - a function that checks for alphabetic character.
 *  @c: is the character to be checked
 *  Return: 1 is c is a letter, lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
