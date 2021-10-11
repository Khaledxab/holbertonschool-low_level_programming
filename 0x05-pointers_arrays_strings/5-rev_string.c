#include "main.h"
#include <string.h>
/**
* rev_string - main.h / print then reverse a string.
* @s: string.
*/
void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j = 0;

	j = strlen(s) - 1;

		while (i < j)
		{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
		j--;
		}
}
