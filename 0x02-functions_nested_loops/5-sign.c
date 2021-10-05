#include "main.h"
/**
* print_sign  - main.h / print if + or - or = 0 
* @n: n to check
* Return: 0
*/
int print_sign(int n)
{
int a = '+' ;
int b = '0' ;
int c = '-' ;
if (n > 0)
  {
  return (1);
_putchar(a);

  }
 else if (n == 0)
   {
return (0);
_putchar (b);
   }
else 
  {
    return (-1);
_putchar(c);
  }
 
}
