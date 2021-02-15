#include <stdio.h>
#include <cs50.h>

int main()
{
    char c = '#';
     printf("%i\n",c);

// Strings are arrays of characters and alphabets
    string d = "HI!";
    // printing out the strings
     printf("%s\n",d);
     // printing out the integer values in the memory
     printf("%i %i %i\n", d[0], d[1], d[2]);

    //touching unused memmory by my program
    printf("%i %i %i %i %i\n", d[0], d[1], d[2], d[3], d[24]);

}