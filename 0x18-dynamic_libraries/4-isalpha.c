#include "main.h"

/**
 * _isalpha - Checks for alphabet letters.
 * @c: The character to be checked.
 *
 * Return: returns 0 or 1 depending on condition.
 *
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
