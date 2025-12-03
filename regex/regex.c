#include "regex.h"

/**
 * regex_match - Checks if a string matches a simple regex pattern
 * @str: The string to scan
 * @pattern: The regex pattern
 *
 * Return: 1 if matches, 0 otherwise
 */
int regex_match(char const *str, char const *pattern)
{
	if (!*pattern)
		return (*str == '\0');

	int first_match = (*str != '\0' &&
					   (*pattern == *str || *pattern == '.'));

	if (*(pattern + 1) == '*')
		return (regex_match(str, pattern + 2) ||
				(first_match && regex_match(str + 1, pattern)));
	else
		return (first_match && regex_match(str + 1, pattern + 1));
}
