#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if( n > 0)
{
printf("%d is greater than %dn \n",n);
}
else if( n == 0)
{
 printf("%d is Zero %dn \n",n);
}
else if( n < 0);
{
printf("%d is less than %dn \n",0);
return (0);
}
