#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int alx;
        unsigned int abraham = 0;

        if (!b)
                return (0);
        for (alx = 0; b[alx]; alx++)
        {
                if (b[alx] < '0' || b[alx] > '1')
                        return (0);
                abraham = 2 * abraham + (b[alx] - '0');
        }
        return (abraham);
}

