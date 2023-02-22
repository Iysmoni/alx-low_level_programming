#include "main.h"

/**
* _isalpha - checks for alphabetic characters
*
* @c: parameter to be checked
*
* Return: if lower or uppercase return 1 else return 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
