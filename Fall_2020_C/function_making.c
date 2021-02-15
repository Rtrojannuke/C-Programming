#include <stdio.h>


void greeting(void);

int main(){
    for(int i = 0; i<=10; i++){
        greeting();
    }
}

void greeting(void){
    printf("HELLO DUDE!\n");
}