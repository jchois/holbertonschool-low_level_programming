#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print something
* Return: 0 always
*/
int main(void)
{
int n, lastDig;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDig = n % 10;
/* your code goes there */
if (lastDig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
}
else if (lastDig == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDig);
}
else
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastDig);
}
return (0);
}
