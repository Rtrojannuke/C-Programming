#include <cs50.h>
#include <stdio.h>
#include <ctype.h>


int main(void)
{
    //GETTING A STRING FROM USER TO SAVE IN g
    char *g = get_string("ENTER STRING: ");

    //GIVING F G'S VALUES
    char *f = g;

    //PRINTING OUT VALUES of each strings
    printf("VALUE OF G IS: %s\n", g);
    printf("VALUE OF F IS: %s\n", f);

    // CHANGING FIRST VALUE OF F TO CAPITAL
    f[0] = toupper(f[0]);

    //PRINTING OUT VALUES AFTER CAPITALIZING FIRST LETTER OF F
    printf("VALUE OF G IS: %s\n", g);
    printf("VALUE OF F IS: %s\n", f);

    //Both F &G"s first letter are going to be capitalized since they are both pointing to the same location in the memory

}