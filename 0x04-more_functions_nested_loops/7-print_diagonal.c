#include "main.h"
/**
 * print_diagonal - draws a straight line in the terminal.
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar ('\\');
}

_putchar ('\n');
}

else
{
_putchar ('\n');
}

}
