#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void){

    string name[] = {"Ade","Bayo","Bola","Kola","Ola","Seyi","Seun",};

    for(int i =0; i<7; i++){
        if (strcmp(name[i], "Adde") == 0){
            printf("found\n");
            return 0;
        }

    }
    printf("NOT FOUND\n");
    return 1;
}