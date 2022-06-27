/**
 * Implemente seu programa em um arquivo denominado substitution.c em um diretório denominado substitution .
    Seu programa deve aceitar um único argumento de linha de comando, a chave a ser usada para a substituição. A chave em si não deve fazer distinção entre maiúsculas e minúsculas, portanto, se algum caractere na chave estiver em maiúscula ou minúscula, isso não deve afetar o comportamento do seu programa.
    Se o seu programa for executado sem nenhum argumento de linha de comando ou com mais de um argumento de linha de comando, seu programa deve imprimir uma mensagem de erro de sua escolha (com printf ) e retornar de main um valor de 1 (o que tende a significar um erro ) imediatamente.
    Se a chave for inválida (por não conter 26 caracteres, conter qualquer caractere que não seja um caractere alfabético, ou não conter cada letra exatamente uma vez), seu programa deverá imprimir uma mensagem de erro de sua escolha (com printf ) e retornar do main um valor de 1 imediatamente.
    Seu programa deve produzir na saída plaintext: - que significa texto simples: (sem uma nova linha) e então solicitar ao usuário uma string de texto simples (usando get_string ).
    Seu programa ter na saída o seguinte texto ciphertext: - que significa texto cifrado - (sem uma nova linha) seguido pelo texto cifrado correspondente do texto simples, com cada caractere alfabético no texto simples substituído pelo caractere correspondente no texto cifrado; os caracteres não alfabéticos devem ser reproduzidos inalterados.
    Seu programa deve preservar maiúsculas e minúsculas: as letras maiúsculas devem permanecer letras maiúsculas; as letras minúsculas devem permanecer em minúsculas.
    Após a saída do texto cifrado, você deve imprimir uma nova linha. Seu programa deve então sair retornando 0 da main .

**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>

int main(int argc, string argv[])
{
    int i, j;
    string plaintext, ciphertext;

    if (argc == 1 || argc > 2)
    {
        printf("Uso: ./ chave de substituição\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("A chave deve conter 26 caracteres.\n");
        return 1;
    }

    for (i = 0; i < strlen(argv[1]); i++)
    {
        if (!((argv[1][i] >= 65) && (argv[1][i] <= 90)) || ((argv[1][i] >= 97) && (argv[1][i] <= 122)))
        {
            printf("Invalid digit");
            return 1;
        }
    }

    ciphertext = plaintext = get_string("plaintext: ");

    for (i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            ciphertext[i] = argv[1][plaintext[i] - 65];
            if (islower(ciphertext[i]))
                ciphertext[i] = (char) ciphertext[i] - 32;
        }
        else if (islower(plaintext[i]))
        {
            ciphertext[i] = argv[1][plaintext[i] - 97];
            if (isupper(ciphertext[i]))
                ciphertext[i] = (char) ciphertext[i] + 32;
        }
    }

    printf("ciphertext: %s\n", ciphertext);

    return 0;
}
