#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit1, digit2;
for (digit1 = 48; digit1 <= 57; digit1++)
{
for (digit2 = 48; digit2 <= 57; digit2++)
{
putchar((digit1);
putchar((digit2);
if (digit1 != 57 || digit2 != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
