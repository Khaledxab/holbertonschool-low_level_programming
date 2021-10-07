#include "main.h"
/**
* _isupper - main.h / uppercase or lowercase
* @c: char to check
* Return: 0
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
