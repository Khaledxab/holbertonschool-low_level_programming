#include<stdio.h>
/**
* main - Print with printf
* Return: 0
*/
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongType)); 
return (0);
}
