#include "main.h"

/**
 * print_alphabet_x10 - Checks for lowercase character
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
	{
			_putchar(i);
	}
		_putchar('\n');
		i = i + 1;
	}
}
