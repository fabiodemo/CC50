#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main()
{
    float val, aux;
    int coins = 0;

    do
    {
        val = get_float("Valor: ");
    } while (val <= 0);

    aux = round(val * 100);

    while (aux >= 0)
    {
        if ((aux - 25) >= 0)
        {
            aux -= 25;
            coins++;
        }
        else if((aux - 10) >= 0)
        {
            aux -= 10;
            coins++;
        }
        else if((aux - 5) >= 0)
        {
            aux -= 5;
            coins++;
        }
        else
        {
            if (aux > 0){
                aux -= 1;
                coins++;
            }
            if (aux <= 0)
            {
                aux = -1;
            }
        }
    }

    printf("%d\n", coins);
}