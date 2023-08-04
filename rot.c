#include "main.h"

/**
 * rot_char_n - returns ROT(n) encrypted given char
 * @c: given char to shift by n
 * @n: number of rotations/shifts on given char
 *
 * Return: encrypted char
 */
char rot_char_n(char c, int n)
{
	if (c >= 32 && c <= 126)
	{
		return (((c - 32) + n) % 95 + 32);
	}
	return (c);
}
/**
 * rot_string_n - encrypts a given string with ROT(n)
 * @s: pointer to string
 * @n: number of shifts/rotations on chars in string
 *
 * Return: pointer to encrypted string
 */
char *rot_string_n(char *s, int n)
{
	unsigned int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		s[i] = rot_char_n(s[i], n);
		i++;
	}
	return (s);
}

/**
 * rot_string_roll - encrypts a given string with rolling ROT(n)
 * @s: pointer to string
 * @n: starting shift value
 *
 * Return: pointer to encrypted string
 */
char *rot_string_roll(char *s, int n)
{
	unsigned int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		s[i] = rot_char_n(s[i], n + i);
		i++;
	}
	return (s);
}
