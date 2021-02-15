#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string s = get_string("ENTER ANYTHING: ");
    printf("OUTPUT: ");
    int lngth = strlen(s);

    for(int i =0; i<lngth; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){

            // all capital letters differs from ther small letters by + 32; if the ASCII character of a is X, X- 32 = A
            printf("%c", s[i] - 32);
        }
        else{
            printf("%c", s[i]);
        }
    }
    printf("\n");


}