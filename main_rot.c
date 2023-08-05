#include "main.h"
/**
 * main - for testing purposes
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n_rot = 1;
	/**
	 * char c = 'a';
	 *
	 * printf("ROT%d(%c) : %c\n", n_rot, c, rot_char_n(c, n_rot));
	 */
	char *str;
	FILE *fp;

	if (argc != 2)
	{
		printf("Usage: read \"filename\"\n");
		exit(1);
	}

	fp = read_file(argv[1]);
	if (fp == NULL)
	{
		printf("Error : no such file [%p]\n", fp);
		exit(2);
	}
	print_file(fp);
	fopen("quote", "w");
	printf("[unencrypted] %s\n", str);
	printf("[ROT1] %s\n", rot_string_n(str, 1));
	printf("[rolling ROT1] %s\n", rot_string_roll(str, n_rot));
	fclose(fp);
	return (0);
}
