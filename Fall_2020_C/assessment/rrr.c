#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size;
    // TODO: Prompt for start size
    do{
        start_size = get_int("ENTER START SIZE: ");
    }
    while(start_size<9);


    // printf("START SIZE: %i\n",start_size);


    // TODO: Prompt for end size
     int end_size;
    // TODO: Prompt for start size
    do{
        end_size = get_int("ENTER END SIZE: ");
    }
    while(end_size<start_size);

    // TODO: Calculate number of years until we reach threshold
    int birthrate;
    int deathrate;
    int end_pol;
    int i = 0;
    int size;
    for(size=0;size<end_size;size++){

        birthrate = start_size/3;
        deathrate = start_size/4;
        end_pol = start_size + birthrate - deathrate;

         printf("CURRENT VALUE OF I: %i\n",i);
        i++;

        if (end_pol == end_size){
            printf("SIZE REACHED");
            break;
        }

        start_size = end_pol;

    }

    // TODO: Print number of years
    printf("THE NUMBER OF YEARS TO REACH THE STITPULATED POPULATION IS: %i\n",i);
}