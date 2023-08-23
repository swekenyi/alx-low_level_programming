#include "main.h"

/**
* times_table - prints the 9 times table
*/
void times_table(void)
{
int x, y, z, u, d;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
u = z / 10;
d = z % 10;

if (y == 0)
{
_putchar('0');
}
else if (u == 0)
{
_putchar(' ');
_putchar(d + '0');
}
else
{
_putchar(u + '0');
_putchar(d + '0');
}

if (y != 9)
{
_putchar(',');
_putchar(' ');
}
}

_putchar('\n');
}
}
