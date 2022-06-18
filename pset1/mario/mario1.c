#include<stdio.h>
#include<cs50.h>

int main () {
    int height, i, j, repeat;

    do {
        height = get_int("height: ");
    } while(height < 1 || height > 8) ;

    // Piramide normal (easymode)
    // printf("Piramide 1: \n");
    // for(i = 0; i < height; i++) {
    //     for(j = 1; j <= i+1; j++)
    //         printf("#");
    //     printf("\n");
    // }

    // Piramide em outro sentido
    // printf("\n\nPiramide 2: \n");
    for(i = 0; i < height; i++) {
        for(j = height - i; j > 1; j--)
            printf(" ");
        for(j = 1; j <= i+1; j++)
            printf("#");
        printf("\n");
    }
}