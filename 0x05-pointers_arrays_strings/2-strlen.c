#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String count
  *
  * Return: length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
