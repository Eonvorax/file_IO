#include "main.h"
/**
 * main - for testing purposes
 *
 * Return: 0
*/
int main(void)
{
	int n_rot = 26;
	char c = 'a';

	printf("ROT%d(%c) : %c\n", n_rot, c, rot_char_n(c, n_rot));
	return (0);
}
