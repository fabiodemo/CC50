#include<stdio.h>
#include<cs50.h>

int main()
{
    int countChar = 0, validation = 0, auxValidation = 0;
    long cardNumber, aux, firstDigit, secondDigit;
    cardNumber = get_long("Number: ");

    aux = cardNumber;
    do
    {
        if((countChar % 2) != 0)
        {
            auxValidation = (aux % 10) * 2;
            validation += (auxValidation < 10) ? (auxValidation) : ((auxValidation / 10) + (auxValidation % 10));
            //printf("%d\n", validation);
            printf("1 %d\n", auxValidation);

        }
        else{
            auxValidation = (aux % 10);
            validation += auxValidation;
            printf("2 %d\n", auxValidation);
        }

        firstDigit = aux;

        if (aux / 10 != 0)
            secondDigit = aux % 10;

        aux /= 10;
        ++countChar;
    } while (aux != 0);

    //printf("%d", validation);

    // printf("%d\n", countChar);
    // printf("%lu\n", firstDigit);
    // printf("%lu\n", secondDigit);

    if ((validation % 10) == 0){
        if ((countChar == 15) && (firstDigit == 3) && (secondDigit == 4 || secondDigit == 7))
            printf("AMEX\n");
        else if ((countChar == 16) && (firstDigit == 5) && (secondDigit >= 1 && secondDigit <= 5))
            printf("MASTERCARD\n");
        else if((countChar == 16 || countChar == 13) && (firstDigit == 4))
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");
}