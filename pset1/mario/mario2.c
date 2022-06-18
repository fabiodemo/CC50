#include<stdio.h>
#include<cs50.h>

int main () {
    int height, i, j;

    do
    {
        height = get_int("height: ");
    } while(height < 1 || height > 8) ;

    for(i = 0; i < height; i++)
    {
        for(j = height - i; j > 1; j--)
            printf(" ");

        for(j = 1; j <= i+1; j++)
            printf("#");

        printf("  ");

        for(j = 1; j <= i+1; j++)
            printf("#");
        printf("\n");
    }
}