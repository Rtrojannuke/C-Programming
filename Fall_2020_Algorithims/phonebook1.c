#include <cs50.h>
#include <string.h>
#include <stdio.h>


typedef struct
{
    string name;
    string number;
}
person;

const int NUMBER = 10;

int main(void){
    person people[2];
    people[0].name =  "Ade";
    people[0].number= "09087654321";

    people[1].name =  "Bayo";
    people[1].number = "08076543455";

     for(int i = 0; i<NUMBER; i++)
     {
      people[i].name = get_string("WHAT IS THE NAME: ");
      people[i].number = get_string("WHAT IS THEIR NUMBER: ");

    }



    for(int j = 0; j<2; j++){

        if (strcmp(people[j].name, "Ade") == 0){
            printf("found %s\n", people[j].number);
            return 0;
        }
    }

    printf("NOT FOUND\n");
    return 1;
}