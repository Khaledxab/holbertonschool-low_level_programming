#include "main.h"
/**
* print_last_digit  - main.h / print last digit
* @n: n to check
* Return: 0
*/
int print_last_digit(int n)
{
int last;
if (n < 0)
{
n = (n % 10) * (-1);
last = n % 10;
_putchar (last + '0');
return (last);
}
else
{
last = n % 10;
_putchar(last + '0');
return (last);
}
}
