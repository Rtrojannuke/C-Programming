#include <stdio.h>

void swap(int *a, int *b);
int main(){

    int x= 1;
    int y = 2;

    printf("value of x is: %i\n", x);
    printf("value of y is: %i\n", y);
    swap(&x,&y);
     printf("value of x is: %i\n", x);
    printf("value of y is: %i\n", y);

}

void swap(int *a, int *b){

    int tmp = *a;
    *a = *b;
    *b = tmp;
}