#include "shell.h"

/**
 * **_strtok1 - splits string to words
 * @str:input string
 * @d: the delim
 *
 * Return: ptr to an array of strings
 */
char **_strtok1(char *str, char d)
{
	int i, j;
	int k, m, nums = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != d && str[i + 1] == d) ||
		    (str[i] != d && !str[i + 1]) || str[i + 1] == d)
			nums++;
	if (nums == 0)
		return (NULL);
	s = malloc((1 + nums) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, x = 0; x < nums; x++)
	{
		while (str[i] == d && str[i] != d)
			i++;

		l = 0;
		while (str[i + l] != d && str[i + l] && str[i + l] != d)
			l++;
		s[x] = malloc((l + 1) * sizeof(char));
		if (!s[x])
		{
			for (l = 0; l < x; l++)
				free(s[l]);
			free(s);
			s = NULL;
			return (NULL);
		}

		for (n = 0; n < l; n++)
			s[x][n] = str[i++];
		s[l][n] = 0;
	}
	s[l] = NULL;
	return (s);
}
