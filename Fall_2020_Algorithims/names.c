#include <cs50.h>
#include <string.h>
#include <stdio.h>

// Search conducted using linear search
int main(void){

    string name[] = {"Bayo","Seyi","Kola","Bola","Ola","Seun","Ade"};

    for(int i =0; i<7; i++){
        if (strcmp(name[i], "Ade") == 0){
            printf("found\n");
            return 0;
        }

    }
    printf("NOT FOUND\n");
    return 1;
}