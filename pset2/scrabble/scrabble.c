/**
 * Conclua a implementação de scrabble.c, de modo que determine o vencedor de um jogo curto do tipo scrabble, em que dois jogadores digitam suas palavras, e o jogador com maior pontuação vence.

Observe que armazenamos os valores dos pontos de cada letra do alfabeto em uma matriz de inteiros chamada POINTS .

    Por exemplo, A ou a vale 1 ponto (representado por POINTS[0]), B ou b vale 3 pontos (representado por POINTS[1]), etc.

Observe que criamos um protótipo para uma função auxiliar chamada compute_score() que recebe uma string como input e retorna um int. Sempre que quisermos atribuir valores de pontos a uma palavra específica, podemos chamar essa função. Observe que este protótipo é necessário para o C saber que compute_score() existe posteriormente no programa.

Em main() , o programa pede aos dois jogadores suas palavras usando a função get_string(). Esses valores são armazenados dentro de variáveis ​​chamadas word1 e word2.

Em compute_score() , seu programa deve calcular, usando o array POINTS , e retornar a pontuação para o argumento string. Os caracteres que não são letras devem receber zero pontos, e as letras maiúsculas e minúsculas devem receber os mesmos valores de pontos.

    Por exemplo, ! vale 0 pontos, enquanto A e a valem 1 ponto.
    Embora as regras do Scrabble normalmente exijam que uma palavra esteja no dicionário, não há necessidade de verificar isso neste problema!

Em main(), seu programa deve imprimir, dependendo da pontuação dos jogadores, Player 1 wins!, Player 2 wins!, ou Tie!.

**/

#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
        printf("Player 1 wins!\n");
    else if (score2 > score1)
        printf("Player 2 wins!\n");
    else
        printf("Tie!\n");

    // printf("\nPlayer 1: %d | Player 2: %d\n", score1, score2);
}

int compute_score(string word)
{
    int i, points = 0;
    // TODO: Compute and return score for strin
    for (i = 0; i < strlen(word); i++)
    {
        if (((word[i] >= 'A') && (word[i] <= 'Z')) || ((word[i] >= 'a') && (word[i] <= 'z')))
        {
            if (isupper(word[i]))
            {
                points += POINTS[(int) (word[i] - 'A')];
                // printf("%d\n", (int) (word[i] - 'A'));
            }
            else if (islower(word[i]))
                points += POINTS[(int) (word[i] - 'a')];
        }
    }

    return points;
}
