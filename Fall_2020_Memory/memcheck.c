#include <cs50.h>
#include <stdio.h>

int main()
{
    int n = 86;

    //Checking the location n is saved
    printf("Location is is: %p\n", &n);

    //Accessing the value in the memory above
    printf("Value stored in Location is is: %i\n", *&n);


}