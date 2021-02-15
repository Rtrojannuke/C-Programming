#include <stdio.h>
#include <cs50.h>

int main(){
    int x = get_int("X: ");

    int y = get_int("Y: ");

    int z = x + y;

    float s = (float) x / (float) y;

    //NB: the int datatype can't take values more than 32bit(0 -- 4000000000) or (-2000000 -- +2000000) in such case it is better  to use long datatype

    printf("%i\n", z);

     //printing out the of the division
     printf("THE DIVISION OF X & Y IS:  %f\n", s);

    // printing out 15d.p of the divisions
      printf("THE DIVISION OF X & Y IS:  %.15f\n", s);


}