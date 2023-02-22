#include "main.h"
/**
* _islower - checks for lowercase characters
*
* @c: parameter to print
*
* Return: return 1 if lowercase else always return 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
