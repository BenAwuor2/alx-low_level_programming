#include "main.h"

/**
 *print-alphabet-Entry point
 *
 *Return:0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		{
			_putchar(alphabet);
		}

	_putchar('\n');

}
