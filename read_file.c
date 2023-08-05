#include "main.h"

/**
 * read_file - reads file and returns FILE pointer
 * @filename: name of file to read
 *
 * Return: pointer to file
 */
FILE *read_file(char *filename)
{
    FILE *f;

    if (filename == NULL)
    {
        return NULL;
    }
    f = fopen(filename, "r");
    return (f);
}

/**
 * print_file - prints each character of the given file until EOF
 * @fp: pointer to file
 *
 * Return: nothing
 */
void print_file(FILE *fp)
{
    int c;

    c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fp);
    }
    printf("\n");
}

/**
 * str_to_file - writes given string to given file
 * @s: pointer to given string
 * @fp: pointer to file
 *
 * Return: pointer to modified file
 */
FILE *str_to_file(char *s, FILE *fp)
{
    if (s == NULL || fp == NULL)
    {
        return (NULL);
    }
    fputs(s, fp);
    return (fp);
}