#include <stdio.h>

/**
* main - print alphabet in lowercase
* Return: 0 always
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar (alphabet);
}
putchar ('\n');
for (alphabet = 'A'; alphabet = 'Z'; alphabet++)
{
putchar (alphabet);
}
return (0);
}
