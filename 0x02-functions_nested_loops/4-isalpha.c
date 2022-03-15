#include "main.h"
/**
 *main
 *
 *Return:1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
