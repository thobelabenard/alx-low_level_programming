#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - after the printed number be a new line
 * @separator: the divider within the number printed
 * @n: the sum of integers passed
 * @...: the amount of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));
			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);


	}
printf("\n");
va_end(numbers);
}
