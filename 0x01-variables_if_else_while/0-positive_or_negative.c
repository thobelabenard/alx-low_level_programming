#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - check if the number is positive or negetive
* Return: 0 (succes)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negetive\n", n);
}
else
{
printf("%d is negetive\n", n);
}
return (0);
}
