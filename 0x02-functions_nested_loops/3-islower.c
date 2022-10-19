#include "main,h"

/**
 * _islower - checks for lowercase
 * @c: the character
 * Return: 1 if lowercase or else 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
