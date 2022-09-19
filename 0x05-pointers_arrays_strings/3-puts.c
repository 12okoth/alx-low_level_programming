#include "main.h"

/**
 *  _puts - Print a string
 *  Auth: Joseph Ongoro
 *  @str: Set of characters
 *
 *  Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
