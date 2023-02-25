#include "main.h"
/**
* _isupper - checks if a letter is in the uppercase
*
* @c: the character to be checked
*
* Return: 1 if letter is uppercase, 0 for otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
