#include "main.h"
/**
* print_alphabet - main.h / alphabetx10
* Return: 0
*/
void print_alphabet(void)
{
int i = 0;
char a;
while (i < 10)
{
a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
i++;
}
}
