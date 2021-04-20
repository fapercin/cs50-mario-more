#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
        height = get_int("Height: ");
    }
    while(height <= 0 || height == 9);
    
    int spaces = height-1;
    int hashtags = 1;
    for(int i = 0; i < height; i++)
    {
        for(int a = 0; a < spaces; a++)
        {
            printf(" ");
        }
        for(int a = 0; a < hashtags; a++)
        {
            printf("#");
        }
        printf("  ");
        for(int a = 0; a < hashtags; a++)
        {
            printf("#");
        }
        /* for(int a = 0; a < spaces; a++)
        {
            printf(" ");
        }*/
        spaces--;
        hashtags++;
        printf("\n");
    }
}
