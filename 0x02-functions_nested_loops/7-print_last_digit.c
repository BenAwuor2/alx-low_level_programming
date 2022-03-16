#include "main.h"

/**
 *print_last_digit - last digit
 *
 *@n: The in to print
 *Return: Always 0
 */
int print_lasgt_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
