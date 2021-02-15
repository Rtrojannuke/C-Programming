#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string s = get_string("ENTER ANYTHING: ");
    printf("OUTPUT: ");
    int lngth = strlen(s);

    for (int i = 0; i<lngth; i++){
        printf("%c",s[i]);
    }
    printf("\n");

}