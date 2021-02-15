#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){
    string name = "MUBarak";
    string name2 = "mubarak";
    if(strcmp(name2, name) == 0){
        printf("it is you");
    }else{
        printf("HELL NO!!!!!!");
    }

}