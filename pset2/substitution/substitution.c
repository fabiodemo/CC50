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

    return 0;
}
