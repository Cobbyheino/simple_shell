#include "shell.h"

/**
 * _strcmp - compares 2 str.
 * @s1: 1st strng
 * @s2: 2nd strng
 *
 *
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = (int)*s1 - (int)*s2;
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		cmp = (int)*s1 - (int)*s2;
	}
	return (cmp);
}


/**
 * _strlen - this retrns lenght of str
 * @s: checkn legth of str
 *
 *
 * Return: length of str to int
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcat - concats two str
 * @dest:its destination
 * @src: its source
 *
 *
 * Return: to dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = *src;
	return (dest);
}

/**
 * _strcpy - copies a string
 * @dest: the destination to be copied to
 * @src: the source to be copied from
 *
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

