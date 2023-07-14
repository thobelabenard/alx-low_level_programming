#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main -determine number whether is positive or negative
*
* Return: always value is (0)
*
*/
int main(void)
{
	int n;
	int answer;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	answer = n % 10;
	if (answer > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, answer);
	} else if (answer < 6 && answer != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, answer);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, answer);
	}
	return (0);
}
