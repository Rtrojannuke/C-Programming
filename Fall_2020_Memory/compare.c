#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("ENTER AN INTEGER: ");
    int j = get_int("ENTER AN INTEGER: ");

    if (i == j)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }


}