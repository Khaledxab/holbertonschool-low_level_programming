#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Count to 10
 * * Return: 0
 */
int main(void)
{
int x = '0';
int e = ' ';
int r = ',';
while (x <= '9')
{
putchar(x);
if (x != '9')
{
putchar(e);
putchar(r);
}
x++;
}
putchar('\n');
return (0);
}
