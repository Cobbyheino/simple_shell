#include "shell.h"

/**
 * _strdup - replicates a str
 * @str: str to be replicatd
 *
 *
 * Return: ptr to the replicate str
 */

char *_strdup(const char *str)

{
	char *ptr;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}

/**
 * starts_with - checks if str(needle) starts with char in str haystack
 * @haystack: string to be searched
 * @needle: string to find
 *
 *
 *
 * Return: address or NULL
 */

char *starts_with(const char *haystack, const char *needle)

{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _putchar - writes to stdout
 * @c: chr to write out
 *
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */

int _putchar(char c)

{
	static int x;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || x >= WRITE_BUF_SIZE)
	{
		write(1, buf, x);
		x = 0;
	}
	if (c != BUF_FLUSH)
		buf[x++] = c;
	return (1);
}

/**
 *_puts - prints an input string
 *@str: the str to print
 *
 * Return: void
 */
void _puts(char *str)

{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

