#include "main.h"
/**
 *main-test wether a character is a
 *lowercase letters
 *Return:1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
