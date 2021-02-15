#include <stdio.h>
#include <cs50.h>

//When const is used it is constant which refers to a value which user will use in alot of places in the program
const int TOTAL =3;


int main(){

    int scores[TOTAL];

    for( int i =0;i<TOTAL;i++){
        scores[i] = get_int("Enter Score: ");
    }
    printf("Average: %f\n" average(TOTAL, scores))


}


float average(int length, int array[])
{
    int sum = 0;
    for(int i =0; i <length; i++){
        sum = sum + array[i];
    }
    return sum/ (float) length;
}