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
int j;
int product;
for (c = 0; c <= 10; c++)
{
for (j = 0; j <= 10; j++)
{
product = number * j;
printf("%d ", product);
}
printf("\n");
}
}
