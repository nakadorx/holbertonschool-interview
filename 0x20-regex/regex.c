#include "regex.h"
/**
* regex_match - holb
* @str: string
* @pattern: pattern
* Return: 1
*/
int regex_match(char const *str, char const *pattern)
{
	int a = 0;
	int y = 0;

	if (!str || !pattern)
		return (0);

	a = *str && (*str == *pattern || *pattern == '.');
	b = *(pattern + 1) == '*';

	if (!*str && !b)
		return (*pattern ? 0 : 1);
	else if (a && b)
		return (regex_match(str + 1, pattern) || regex_match(str, pattern + 2));
	else if (a && !b)
		return (regex_match(str + 1, pattern + 1));
	else if (b)
		return (regex_match(str, pattern + 2));
	return(0);
}
