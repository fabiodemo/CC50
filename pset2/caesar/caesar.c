/**
 * Projete e implemente um programa, o caesar , que criptografa mensagens usando a cifra de César.
    Implemente seu programa em um arquivo denominado caesar.c em um diretório denominado caesar .
    Seu programa deve aceitar um único argumento de linha de comando, um inteiro não negativo. Vamos chamá-lo de k para fins de discussão.
    Se o seu programa for executado sem nenhum argumento de linha de comando ou com mais de um argumento de linha de comando, seu programa deve imprimir uma mensagem de erro de sua escolha (com printf ) e retornar de main um valor de 1 (o que tende a significar um erro ) imediatamente.
    Se algum dos caracteres do argumento da linha de comando não for um dígito decimal, seu programa deve imprimir a mensagem Use: ./caesar key e retornar de main o valor 1 .
    Não suponha que k será menor ou igual a 26. Seu programa deve funcionar para todos os valores integrais não negativos de k menores que 2 ^ 31 - 26. Em outras palavras, você não precisa se preocupar se seu programa eventualmente quebra se o usuário escolher um valor para k que é muito grande ou quase grande para caber em um int . (Lembre-se de que um int pode estourar.) Mas, mesmo se k for maior que 26, os caracteres alfabéticos na entrada do programa devem permanecer caracteres alfabéticos na saída do programa. Por exemplo, se k é 27, A não deve se tornar [ embora [ esteja a 27 posições de A em ASCII, por http://www.asciichart.com/[asciichart.com]; A deve tornar-se B , já que B esta a 27 posições de A , desde que você revolva em torno de Z a A.
    Seu programa deve produzir plaintext: (sem uma nova linha) [texto simples] e então solicitar ao usuário uma string de texto simples (usando get_string ).
    Seu programa deve produzir ciphertext: (sem uma nova linha) [texto cifrado] seguido pelo texto cifrado correspondente do texto simples, com cada caractere alfabético no texto simples “girado” por k posições; os caracteres não alfabéticos devem ser reproduzidos inalterados.
    Seu programa deve preservar as letras maiúsculas e minúsculas: as letras maiúsculas, embora giradas, devem permanecer letras maiúsculas; as letras minúsculas, embora giradas, devem permanecer em minúsculas.
    Após a saída do texto cifrado, você deve imprimir uma nova linha. Seu programa deve então sair retornando 0 de main.
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>

int main(int argc, string argv[])
{
    int k, i = 0, n = 0;
    string plaintext;

    if (argc == 1 || argc > 2)
    {
        // for (int i = 0, n = strlen(argv[1]); i < n; i++)
        // {
        //     printf("%c\n", argv[1][i]);
        // }
        printf("Erro! Argumento vazio ou mais de um argumento especificado na entrada!");
        return 1;
    }

    for (i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Use: ./caesar key");
            return 1;
        }
    }

    plaintext = get_string("plaintext: ");
    string ciphertext = plaintext;
    k = atoi(argv[1]);

    for (i = 0, n = strlen(ciphertext); i < n; i++)
    {
        if islower(ciphertext[i])
            ciphertext[i] = ((((ciphertext[i] + k) - 97) % 26) + 97);
        else if isupper(ciphertext[i])
            ciphertext[i] = ((((ciphertext[i] + k) - 65) % 26) + 65);
        else
            ciphertext[i] = ciphertext[i];
    }

    printf("ciphertext: %s\n", ciphertext);

    return 0;
}
