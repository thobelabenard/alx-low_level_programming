#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int count;

	for (count = 0; count < 52; count++)
	{
		putchar(letters[count]);
	}
	putchar('\n');
	return (0);
}

