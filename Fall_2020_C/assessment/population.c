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

    do{
        end_size = get_int("ENTER END SIZE: ");
    }
    while(end_size<start_size);

    // TODO: Calculate number of years until we reach threshold

    int birthrate;
    int deathrate;
    int end_pol;
    int years = 0;
    int size;


    do{

        if(start_size == end_size){
            years = 0;
            break;
          }


        birthrate = start_size/3;
        deathrate = start_size/4;
        end_pol = start_size + birthrate - deathrate;

        start_size = end_pol;
        years++;

    }

    while(end_pol < end_size);




    // TODO: Print number of years
    printf("Years: %i\n",years);
}