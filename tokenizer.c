#include "shell.h"
/**
 * **_strtok - strings are split to words
 * @str: input string
 * @d: delimeter string
 * Return: pointer to array of strings
 *
 */

char **_strtok(char *str, char *d)
{
	int i, x;
	int l, n, nums = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			nums++;
	if (nums == 0)
		return (NULL);
	s = malloc((1 + nums) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, x = 0; x < nums; x++)
	{
		while (is_delim(str[i], d))
			i++;
		l = 0;
		while (!is_delim(str[i + l], d) && str[i + l])
			l++;
		s[x] = malloc((l + 1) * sizeof(char));
		if (!s[x])
		{
			for (l = 0; l < x; l++)
				free(s[l]);
			free(s), s = NULL;
			return (NULL);
		}
		for (n = 0; n < l; n++)
			s[x][n] = str[i++];
		s[x][n] = 0;
	}
	s[x] = NULL;
	return (s);
}
