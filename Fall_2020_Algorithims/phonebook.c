#include <cs50.h>
#include <string.h>
#include <stdio.h>


typedef struct
{
    string name;
    string number;
}
person;

int main(void){
    person people[2];
    people[0].name =  "Ade";
    people[0].number= "09087654321";

    people[1].name =  "Bayo";
    people[1].number = "08076543455";



    for(int i = 0; i<2; i++){

        if (strcmp(people[i].name, "Ade") == 0){
            printf("found %s\n", people[i].number);
            return 0;
        }
    }

    printf("NOT FOUND\n");
    return 1;
}