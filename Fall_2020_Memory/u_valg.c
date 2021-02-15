#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void)
{

    //Declaring a string variable of f which saves memory location using the malloc() command
    char *f = malloc(4); // ALLOCATE location that is less than number of values needed

    f[0] = 'H';
    f[1] = 'I';
    f[2] = '!';
    f[3] = '\0';

    printf("%s\n", f);
    free(f);


}