#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int number;

	printf("Enter the number: ");
	scanf("%d", &number);

	int c;

	for (c = 0; c <= 10; c++)
	{
		int product = number * c;

		printf("%d*%d = %d\n", number, c, product);
	}
}
