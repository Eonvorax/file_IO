#include "main.h"
/**
 * main - for testing purposes
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n_rot = 1;
	char str[1024];
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
	fgets(str, 1024, fp);
	printf("[unencrypted] %s\n", str);
	printf("[ROT1] %s\n", rot_string_n(str, 1));
	printf("[rolling ROT1] %s\n", rot_string_roll(str, n_rot));
	printf("[decoded rolling ROT1] %s\n", decode_rot_string_roll(str, n_rot));
	fclose(fp);
	return (0);
}
