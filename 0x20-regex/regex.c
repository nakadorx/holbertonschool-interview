#include "regex.h"
/**
 * regex_match - holb
 * @str: str
 * @pattern: pat
 *
 * Return: return 1
 */
int regex_match(char const *str, char const *pattern)
{
	if (!*str)
		return (!*pattern || (pattern[1] == '*' && regex_match(str, pattern + 2)));
	if (pattern[1] == '*')
		return ((*pattern == '.' || *str == *pattern)
			 ? (regex_match(str + 1, pattern) || regex_match(str, pattern + 2))
			 : (regex_match(str, pattern + 2)));
	return ((*pattern == '.' || *pattern == *str) && regex_match(str + 1, pattern + 1));
}
