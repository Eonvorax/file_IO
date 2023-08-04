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
