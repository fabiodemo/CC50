/**
 * Complete a implementação de plurality.c de tal forma que o programa simule uma eleição de voto plural.

    Complete a função de vote.
        vote leva um único argumento, uma string chamada name , que representa o nome do candidato que foi votado.
        Se o name corresponder a um dos nomes dos candidatos na eleição, atualize o total de votos desse candidato para contabilizar a nova votação. A função de votação(vote) neste caso deve retornar true para indicar uma votação bem-sucedida.
        Se o name não corresponder ao nome de nenhum dos candidatos na eleição, nenhum total de votos deve mudar e a função de voto(vote) deve retornar false para indicar uma cédula inválida.
        Você pode presumir que dois candidatos não terão o mesmo nome.
    Conclua a função print_winner .
        A função deve imprimir o nome do candidato que recebeu mais votos na eleição e, em seguida, imprimir uma nova linha.
        É possível que a eleição termine em empate se vários candidatos tiverem, cada um, o número máximo de votos. Nesse caso, você deve imprimir os nomes de cada um dos candidatos vencedores, cada um em uma linha separada.
 * 
**/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    return;
}

