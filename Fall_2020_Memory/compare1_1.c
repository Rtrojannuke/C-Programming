#include <stdio.h>
#include <cs50.h>
#include <string.h>



int main(void)
{
    char *i = get_string("ENTER A STRING: ");
    char *j = get_string("ENTER A STRING: ");

    printf("Value of i IS:  %s\n", i);
    printf("Value of j IS:  %s\n", j);

    if (strcmp(i, j)==0)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }

//THEIR REAL VALUES SINCE STRINGS ARE POINTERS ARE
printf("Value of i IS:  %p\n", i);
printf("Value of j IS:  %p\n", j);


}