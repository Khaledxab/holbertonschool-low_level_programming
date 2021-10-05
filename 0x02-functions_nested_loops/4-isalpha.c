#include "main.h"
/**
* _isalpha  - main.h / returns zero if c is not a lowercase,letter or uppercase
* @c: c is an integer
* Return: 0
*/
int _isalpha(int c)
{
if (c > 64 && c < 123)
return (1);
else
return (0);
}
