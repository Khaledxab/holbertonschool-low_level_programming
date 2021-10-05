#include "main.h"
/**
* _islower  - main.h / returns zero if c is not a lowercase letter
* @c: c is an integer
* Return: 0
*/
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
