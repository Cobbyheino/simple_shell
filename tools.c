#include "shell.h"

/**
 * freearrays - free memory blocks of array
 * @array: the array to be freed
 *
 * Return: freed block
 */

void freearrays(char **array)
{
	int i;

	if (!array)
		return;

	for (i = 0; array[i]; i++)
	{
		free(array[i]);
		array[i] = NULL;
	}

	free(array), array = NULL;
}

/**
 * print_error - Prints an error message to standard error
 * @name: The name of the program
 * @cmd: The command that caused the error
 * @idx: The index of the command in the history
 */

void print_error(char *name, char *cmd, int idx)
{
	char *index, mssg[] = ": not found\n";

	index = _itoa(idx);

	write(STDERR_FILENO, name, _strlen(name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index, _strlen(index));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, cmd, _strlen(cmd));
	write(STDERR_FILENO, mssg, _strlen(mssg));

	free(index);
}

/**
 * _itoa - Converts an integer to a string
 * @n: The integer to be converted
 */

char *_itoa(int n)
{
	char buffer[20];
	int i = 0;

	if (n == 0)
		buffer[i++] = '0';
	else
	{
		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
	}

	buffer[i] = '\0';
	reverse_string(buffer, i);

	return (_strdup(buffer));
}

/**
 * reverse_string - Reverses a string in place
 * @str: The string to be reversed
 * @len: The length of the string
 * void reverse_string(char *str, int len)
 */
{
	char tmp;
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}
