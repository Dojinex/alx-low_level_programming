#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits.
 *
 *Return: Always 0
 */
int main(void)
{
int num1;
int num;
for (num = 48; num <= 57 ; num++)
{
for (num1 = num + 1 ; num1 <= 57 ; num1++)
{
putchar (num);
putchar (num1);
for (num == 56 && num1 == 57)
{
putchar ('\n');
break;
}
putchar (',');
putchar (' ');
}
}
return (0);
}
