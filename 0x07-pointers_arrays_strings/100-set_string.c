#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of s pointer to pointer value to (to)
 *
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 *
 * Return: Return void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
