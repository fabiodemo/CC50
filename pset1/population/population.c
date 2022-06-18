#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int val, finalVal, i;
    // TODO: Solicite o valor inicial ao usuário
    do
    {
        val = get_int("Start size: ");
    } while (val < 9);
    //printf("%d", val);

    // TODO: Solicite o valor final ao usuário
    do
    {
        finalVal = get_int("Final size: ");
    } while (finalVal < val);

    // TODO: Calcule o número de anos até o limite
    for ( i = 0; val < finalVal; i++)
    {
        val += (val/3) - (val/4);
        // printf("%d\n", val);
    }

    // TODO: Imprima o número de anos
    printf("Years: %d\n", i);

}