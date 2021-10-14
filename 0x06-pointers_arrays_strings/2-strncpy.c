#include "main.h"
/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: string.
 * @src: string.
 * @n: number of bytes to copied from src.
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i =  0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
