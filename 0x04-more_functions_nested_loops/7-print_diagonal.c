#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 *@n: number.
 *
 *Return: diagonel line on the terminal.
 */

viod print_diagonal(int n)
{
	int files;
	int columnas;

	if (n > 0)
	{
		for (columnas = 0; columnas <= files; columnas++)
		{
			if (files == columnas)
			{
				_putchar ('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
