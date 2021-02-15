#include <stdio.h>


void greeting(int n);

int main(){
    for(int i = 0; i<=10; i++){
        greeting(10);
    }
}

void greeting(int n){
    for (int i = 0; i<= n; i++){
       printf("HELLO DUDE!\n");
    }

}