#include "main.h"
#include <stdio.h>
/**
*more_numbers - function that print all numbers from
*0 to 14
*
*Return: returns nothing
*/

void more_numbers(void)
{
int i, j;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i + '0');

}
_putchar('\n');
}
_putchar('\n');
}