#include <stdio.h>
/* more headers goes there */

/* bettystyle doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 89; a++)
		if (a < ((a % 10) * 10) + (a / 10))
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
