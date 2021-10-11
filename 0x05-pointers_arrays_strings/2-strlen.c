#include "main.h"
/**
* _strlen - main.h / return the length
* @s: string
*
* Return: length of @s.
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i); 
}
