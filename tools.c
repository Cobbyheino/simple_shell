#include "shell.h"

/**
 *_atoi - converts a str to integer
 *@s:string to be converted
 *
 *Return: 0
 */

int _atoi(char *s)

{
	int i, sign = 1;
	int flag = 0, output;

	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
/* result to accumulate the parse integer value*/
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
/*check whether results is neg or poss*/
	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}



/**
 * is_delim - checks for delimeter
 * @c: char to check
 * @delim: delimeter string
 * Return: 1 if true, 0 if false
 *
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - checks for alphabet
 *@c: character to input
 *Return: 1 if apha or 0 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
