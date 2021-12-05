#include "regex.h"
/**
* regex_match - holb
* @str: string
* @pattern: pattern
* Return: 1
*/
int regex_match(char const *str, char const *pattern)
{
	int x = 0;
	int y = 0;

	if (!str || !pattern)
		return (0);

	x = *str && (*str == *pattern || *pattern == '.');
	y = *(pattern + 1) == '*';

	if (!*str && !y)
		return (*pattern ? 0 : 1);
	else if (x && y)
		return (regex_match(str + 1, pattern) || regex_match(str, pattern + 2));
	else if (x && !y)
		return (regex_match(str + 1, pattern + 1));
	else if (y)
		return (regex_match(str, pattern + 2));
	return(0);
}
