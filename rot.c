#include "main.h"

/**
 * rot_char_n -
 */
char rot_char_n(char c, int n)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (((c - 'A') + n) % 26 + 'A');
	}
	if (c >= 'a' && c <= 'z')
	{
		return (((c - 'a') + n) % 26 + 'a');
	}
	return (0);
}
