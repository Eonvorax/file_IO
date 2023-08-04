#include "main.h"
/**
 * main - for testing purposes
 *
 * Return: 0
*/
int main(void)
{
	int n_rot = 1;
	/**
	 * char c = 'a';
	 *
	 * printf("ROT%d(%c) : %c\n", n_rot, c, rot_char_n(c, n_rot));
	 */
	char str[] = "It's written on my back! 'Mazino'. If there's anyone who has a problem with what I do, tell them to come to find me. I'm not afraid of anyone.";

	printf("[unencrypted] %s\n", str);
	printf("[ROT1] %s\n", rot_string_n(str, 1));
	printf("[rolling ROT1] %s\n", rot_string_roll(str, n_rot));
	return (0);
}
