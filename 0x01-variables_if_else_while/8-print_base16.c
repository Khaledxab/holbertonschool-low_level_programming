#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - AlPhAbEt
* Return: 0
*/
int main(void)
{
int e = '\n';
int x = '0';
int X = 'a';
while (x <= '9')
{
putchar(x);
x++;
}
while (X <= 'f')
{
putchar(X);
X++;
}
putchar (e);
return (0);
}
