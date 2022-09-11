#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 
 * Return: Always (Success)
 */
int main(void)
{
int c, i;

for (c = '0'; c <= '9'; c++)
{
for (i = '0'; i <= '9'; i++)
{
if (c < i)
{
putchar(c);
putchar(i);

if (c != '8' || (c == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}

