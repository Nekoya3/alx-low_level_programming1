#include <stdio.h>

/**
 * main - program that prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 *
 * Return: Always (Success)
 */
int main(void)
{
int c, i, k;
for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
for (k = '0'; k <= '9'; k++)
{
if (c < i && i < k)
{
putchar(c);
putchar(i);
putchar(k);

if (c != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');

return (0);
}

