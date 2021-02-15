#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//CODE TO GIVE VALUE TO A STRING THEN ASSIGN THE VALUE IN ANOTHER USING FOR LOOP

int main(void)
{
    //GETTING A STRING FROM USER TO SAVE IN g
    char *g = get_string("ENTER STRING: ");

    //Declaring a string variable of f which saves memory location using the malloc() command
    char *f = malloc(strlen(g)+1); // save location that can contain same number of values as previous variable includeing the null character

    if(f == NULL){
        printf("TASK CAN'T BE DONE");
        return 1;
    }

    int s = strlen(g);

    //Assigning values to the s


    //PRINTING OUT each VALUES of g and saving in f
    for(int i = 0; i<+s; i++)
    {
        f[i] = g[i];
    }

    //PRINTING VALUES IN EACH STRING
    printf("VALUE OF G IS: %s\n", g);
    printf("VALUE OF F IS: %s\n", f);

    // CHANGING FIRST VALUE OF F TO CAPITAL
    if(strlen(f) <= 0){
        printf("NO VALUE DISCOVERED\n");
    }
    else{

        f[0] = toupper(f[0]);
    }


    //PRINTING OUT VALUES AFTER CAPITALIZING FIRST LETTER OF F
    printf("VALUE OF G IS: %s\n", g);
    printf("VALUE OF F IS: %s\n", f);
    //Only F's first letter  is capitalized since F&G aren't pointing to the same location in the memory

    //freeing the saved location saved by using the malloc command
    free(f);

}