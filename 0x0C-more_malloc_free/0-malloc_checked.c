#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *malloc_checked - function allocates memory
  *@b: the size to allocare
  *Return: pointer to new memory allocated
  */

void *malloc_checked(unsigned int b)
{
	void *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}

