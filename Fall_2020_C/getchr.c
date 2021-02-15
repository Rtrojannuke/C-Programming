#include <stdio.h>
#include <cs50.h>

int main(){
    char c = get_char("DO YOU WANT TO BUY IT: ");
    if(c == 'y' || c == 'Y'){
        printf("YOU HAVE AGREED\n");
        printf("YOUR ORDER IS PROCESSING");
    }
    else if(c == 'n' || c == 'N'){
        printf("YOU DIDN'T AGREE \n");
        printf("YOUR ORDER HAS BEEN CANCELLED\n");
    }

}