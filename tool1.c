#include "shell.h"
/**
 * is_positive_number - makes a numb positive
 * @str: string to change
 * Return: only 1
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
 * _atoi - letters to integers
 * @str: string to change
 * Return: number
 */

int _atoi(char *str)
{
	int i, num = 0;

	for (i = 0; str[i]; i++)
	{
		num *= 10;
		num += (str[i] - '0');
	}
	return (num);
}
