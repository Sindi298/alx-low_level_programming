#include "variadic_function.h"

/**
 * print_numbers - prints num
 * @separator: pointer param
 * @n: param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n - 1)
			printf("%d", separator);
	}

	printf("\n");
	va_end(list);
}
