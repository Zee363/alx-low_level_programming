#include "main.h"

/**
 * _isdigit - A function that checks for digits
 * @e: The character to be checked
 * Return: 1 for a digit character or 0 for anything else
 */

int _isdigit(int e)
{
if (e >= 48 && e <= 57)
{
return (1);
}
return (0);
}
