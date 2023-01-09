#include "main.h"
/**
 * _isalpha - checks for characters
 * @c: is a character
 * Return: 0 or 1 depending on the condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
