#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 **/
void *malloc_checked(unsigned int b)
{
	void *s;
	s = malloc(sizeof(b));

	if (s == NULL)
		exit(98);
	return (s);
}
