#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main(void)
{
    //the code utilize the C language FILE datatype which is to open a file.
    // The FILE function takes 2 arguments which are name of file you want to open and the open mode(read, write, append(able to add more rows to the))
    FILE *file = fopen("phonebook.csv","a");
    if(file == NULL)
    {
        return 1;
    }
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s,%s\n", name,number);

    fclose(file);





}