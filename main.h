#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

FILE *read_file(char *filename);

void print_file(FILE *fp);

char rot_char_n(char c, int n);

char *rot_string_n(char *s, int n);

char *rot_string_roll(char *s, int n);

#endif
