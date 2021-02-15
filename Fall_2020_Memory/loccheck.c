#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = 66;

    // declaring a pointer to save the location of n in the memory
    int *p = &n;

    //Checking the location n is saved
    printf("Value stored in Location is is: %p\n", p);

    //printing the values in the location using p(printing value saved in n by using the pointer)
    printf("Value saved in location: %i\n", *p);


}