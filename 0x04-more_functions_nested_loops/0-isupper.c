#include "main.h"

/**
 * _isupper - A character that checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
