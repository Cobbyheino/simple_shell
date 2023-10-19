#include "shell.h"

/**
 * is_positive_number - Checks if a string represents a positive number
 * @str: The string to be checked
 * return: 0 or 1
 */

int is_positive_number(char *str)
{
	int i;

	if (!str)
		return (0);
	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _atoi - Converts a string to an integer
 * @str: The string to be converted
 * int _atoi(char *str)
 * Return: return 0
 */
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		num *= 10;
		num += (str[i] - '0');
	}
	return (num);
}
