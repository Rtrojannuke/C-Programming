#include <stdio.h>
#include <cs50.h>

int main(){

   // Method to get inputs from User
   string name = get_string("What is your Name: ");
   printf("%s YOU ARE WELCOME TO PROGRAMMING WITH C \n",name );

   // printing multiple values require the use of a format method like %s- String, %d - Integer, %f - Float, %lf - Double,%c-char, %i-interger, %li-long integer

   // Printing Out Integer value on the print system
   int age = 36;
   printf("YTOUR AGE IS : %d\n", age); // using %d to print out values in the print function
   float kade = 12.68;
   printf("YOUR VALUE IS: %f\n", kade); // using %f to print float values
   double jam = 13.5432456;
   printf("YOUR VALUE IS ********: %lf\n", jam); // using %lf to print double values

   // TAKING IN INPUT USING SCANF
   int gar;
   printf("Enter an integer: ");
   scanf("%d", &gar);
   printf("YOU ENTERED %d\n", gar);






}