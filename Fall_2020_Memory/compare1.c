#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char *i = get_string("ENTER A STRING: ");
    char *j = get_string("ENTER A STRING: ");

    if (i == j)
    {
        printf("SAME\n");
    }
    else
    {
        printf("DIFFERENT\n");
    }

// THE COMPARISON DONE FROM LINE 9 TO 16 WILL ALWAYS PRINT OUT DIFFERENT EVEN IF SAME VALUES ARE ENTERED BCOS THE VALUES ARE NOT WHAT IS BEING COMPARED BUT THEIR LOCATIONS THIS CAN BE CHECKED BY PRINTING OUT THEIR VALUES/POINTERS SAVED
printf("Value of i IS:  %s\n", i);
printf("Value of j IS:  %s\n", j);

//THEIR REAL VALUES SINCE STRINGS ARE POINTERS ARE
printf("Value of i IS:  %p\n", i);
printf("Value of j IS:  %p\n", j);


}