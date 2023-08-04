#include "main.h"

int main ()
{
    int n_rot = 50;
    char c = 'a';
    printf("ROT%d(%c) : %c\n", n_rot, c, rot_char_n(c, n_rot));
    return (0);
}
