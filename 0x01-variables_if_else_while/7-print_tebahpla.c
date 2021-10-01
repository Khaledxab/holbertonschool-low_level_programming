#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print_alphabet
* Return: 0
*/
int main(void)
{
int e = '\n';
int x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar (e);
return (0);
}
