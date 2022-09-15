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
int i;
int j = 0;
while (j <= 9)
{
for (i = 0; i <= 14; i++)
{
_putchar(i + '0');

}
_putchar('\n');
}
j = j + 1;
}
