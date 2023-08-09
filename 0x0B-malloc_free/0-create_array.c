#include "main.h"
#include <stdlib.h>
/**
 * main - create array of size and assign char c
 * show: array size
 * Return: pointer to array (NULL) if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
