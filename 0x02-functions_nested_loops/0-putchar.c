#include "main.h"
/**
 * main - Print "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char chaine[] = "_putchar";

	while (i < 9)
	{
		_putchar(chaine[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
