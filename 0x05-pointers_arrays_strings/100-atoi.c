#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: holds string
 * Return: number
 */

int _atoi(char *s)
{
	int i;
	unsigned int j;
	char *temp;

	temp = s;
	j = 0;
	i = 1;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
		{
			i *= -1;
		}
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			j = j * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= 9);
	}
	return (j * i);
}
