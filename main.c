#include "main.h"

/**
 * main - main function for testing
 * 
 * Return: 0
*/
int main(int argc, char *argv[])
{
    FILE *fp;

    if (argc != 2)
    {
        printf("Usage: read \"filename\"\n");
        exit(98);
    }

    fp = read_file(argv[1]);
    printf("Address of the file : %p\n", fp);
    print_file(fp);
    fclose(fp);
    return (0);
}
