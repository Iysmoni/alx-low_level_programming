#include "main.h"
/**
* _abs - check for absolute value
*
* @a: parameter
*
* Return: a
*/

int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;

		return (abs_val);
	}

	return (a);
}
