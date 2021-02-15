#include <stdio.h>

int main()
{
    // declaring a string datatype in C
    char *ng = "HI!";

    //Checking the location ng is saved
    //printf("Value stored in Location is is: %p\n", p);

    //printing the location of the individual characters in c
    printf("Location of H is: %c\n", *ng);
    printf("Location of I is: %c\n", *(ng+1));
    printf("Location of ! is: %c\n", *(ng+2));
    //To print the null charactor or 0 value that signifies the end of the string array we can use the folllowing
    printf("Location of ! is: %c\n", *(ng+3)); // but this prints out an empty/non displayable value
    //we can use the following to print out the value since we know that char are integers since computer understands only 0 and 1
    printf("Location of ! is: %i\n", *(ng+3));

    //other location(S) can also be accessed just by using the pointer Arithmetic
    printf("Location of ! is: %i\n", *(ng+1500)); //OR
    printf("Location of ! is: %i\n", *(ng+15000)); // gIVES A SEGMENTATION FAULT ERROR



    // example of pointer arithmetic is: (ng +1) to get the value saved in the first cell after 1;


    // printf("Location of H is: %p\n", *ng[0]);
    // printf("Location of I is: %c\n", ng[1]);
    // printf("Location of ! is: %c\n", ng[2]);




    // //printing the values in the location using p(printing value saved in n by using the pointer)
    // printf("Value saved in location: %s\n", *p);




}