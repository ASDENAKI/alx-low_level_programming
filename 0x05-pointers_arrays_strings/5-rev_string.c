#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: holds the string
 */

void rev_string(char *s)
{
	char c;
	int i;
	int j = 0;
	int k= 0;

	while (s[j] != '\0')
		j++;
	
	k = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[k];
		s[k] = c;
		k -= 1;
	}

}
