#include <stdio.h>

/**
* main - print alphabet in lowercase
* Return: 0 always
*/
int main(void)
{
int b;
for (b = 49; b < 58; b++)
{
putchar (b);
}
for (b = 97; b < 103; b++)
{
putchar (b);
}
putchar("\n");
return (0);
}
