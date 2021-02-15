#include <cs50.h>
#include <stdio.h>

int main()
{
    string ng = "HI!";

    // declaring a pointer to save the location of n in the memory
    string *p = &ng;

    //Checking the location ng is saved
    printf("Value stored in Location is is: %p\n", p);

    //printing the location of the individual characters in c
    printf("Location of H is: %p\n", &ng[0]);
    printf("Location of I is: %p\n", &ng[1]);
    printf("Location of ! is: %p\n", &ng[2]);



    //printing the values in the location using p(printing value saved in n by using the pointer)
    printf("Value saved in location: %s\n", *p);




}