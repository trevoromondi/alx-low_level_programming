#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @x: chracters to check
 * Return: 0 or 1
 */
int _isalpha(int x)
{
	return ((x >= 97 && x <= 122) || (x >= 65 && x <= 90));
}
