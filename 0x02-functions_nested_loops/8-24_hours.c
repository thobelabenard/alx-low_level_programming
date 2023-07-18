#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int j, k, l, m
	for (j = 0; j <= 2; j++)
	{
	 for (k = 0; k <= 9; k++)
	 {
		for (l = 0; l<= 5; l++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (j >= 2 && k <=4)
					break;
				{
					_putchar(j + 48);
					_putchar(k + 48);
					_putchar(58);
					_putchar(l + 48);
					_putchar(m + 48);
					_putchar('\n');
				}
			}
		}
	 }
	}
}
