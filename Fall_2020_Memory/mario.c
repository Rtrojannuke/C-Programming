#include <cs50.h>
#include <stdio.h>

void draw(int h);

//program to draw # of size of height using loops
int main(void)
{
    int height = get_int("height: ");
    draw(height);
}
void draw(int h)
{
    for(int i =1; i<=h; i++)
    {
        for (int j =1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}