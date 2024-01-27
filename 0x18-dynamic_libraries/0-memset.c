#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - Program fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
