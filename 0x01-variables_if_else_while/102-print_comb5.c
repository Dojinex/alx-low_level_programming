#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
int ch;
int n;
for (ch = 0; n <= 90 ; n++)
{
for (ch = n ; ch <= 99 ; ch++)
{
if (ch != n)
{
putchar (n / 10 + 48);
putchar (n % 10 + 48);
putchr(' ')
putchr(ch / 10 + 48)
putchr(ch % 10 + 48)
if (n * 100 + ch != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar (10);
return (0);
}
