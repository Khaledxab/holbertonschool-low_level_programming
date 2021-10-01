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
int x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q' )
{
putchar (x) ;
x++ ;
}
else 
{
x++ ;
}
}
putchar (e);
return (0);
}
