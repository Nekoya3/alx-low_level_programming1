#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');

return (0);
}

