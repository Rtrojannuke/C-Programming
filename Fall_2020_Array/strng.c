#include <stdio.h>
#include <cs50.h>

int main()
{
    string s = get_string("ENTER ANYTHING: ");
    printf("OUTPUT: ");

    for (int i = 0; s[i] != '\0'; i++){
        printf("%c",s[i]);
    }
    printf("\n");

}