#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *@n: print int
 *Return: Always 0.
 */

viod print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				_putchar (' ');
			}
			  _putchar(92);
			  _putchar('\n');

		}
	}
	
	else
	{
		_putchar('\n');
	}
	
}
