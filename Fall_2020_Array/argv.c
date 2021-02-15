#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc == 2){
        printf("hello, %s\n", argv[1]);
    }
    else{
        printf("hello, world\n");
    }

}
//Code explanation
// int argc is an integer that number of values enterd in the commandline when running scripts
// string argv is to save the arguments
//e.g if users enter ./argv Mubarak
// the number of words entered is 2
// number[0] = ./argv which is the command to run code
// number[1] = Mubarak which is the word to be used in the program
// line 7 is the code that takes in word of number[1] and use it in the code