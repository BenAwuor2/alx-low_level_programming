#include "main.h"

/**
 *print_square - function that prints a square, followed by a new line.
 *
 *@size: where size is the size of the square.
 *
 *Return: 0.
 */

void print_square(int size)
{
	int files;
	int columnas;

	if (size > 0)
		for (filas = 0; filas < size; filas++)
		{
			for (columnas = 0; columnas < size; columnas++)
			{
				_putchar ('#');
			}
			 _putchar ('\n');
		}
	else
	{
		 _putchar ('\n');
	}
}
