#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc != 2){
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}

//code Explanation:  the code stops/doesn't execute when it gets to line 9(return 1) if user doesn't give an argument(e.g ./exit muna(muna is the argument) ) when running the program
// The purpose of the code is just to check for the reason why the main function has an int datatype
//which is because integers are used in denoting the error in the C language main function e.g when a program is run successfully, the integer it returns is zero,
//though it usually not seen by user but can be seen by user when they run the command "echo $?"