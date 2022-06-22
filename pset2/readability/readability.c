/**
Projete e implemente um programa, readability, que calcule o índice Coleman-Liau do texto.
índice = 0,0588 * L - 0,296 * S - 15,8
    Implemente seu programa em um arquivo denominado readability.c em um diretório denominado readability.
    Seu programa deve solicitar ao usuário uma string de texto (usando get_string ).
    Seu programa deve contar o número de letras, palavras e frases do texto. Você pode assumir que uma letra é qualquer caractere minúsculo de a a z ou qualquer caractere maiúsculo de A a Z , qualquer sequência de caracteres separados por espaços deve contar como uma palavra e que qualquer ocorrência de um ponto final, ponto de exclamação ou ponto de interrogação indica o final de uma frase.
    Seu programa deve imprimir como saída "Grade X", onde X é o nível de grau calculado pela fórmula de Coleman-Liau, arredondado para o número inteiro mais próximo.
    Se o número do índice resultante for 16 ou superior (equivalente ou superior ao nível de leitura de graduação sênior), seu programa deve produzir "Grade 16+" em vez de fornecer o número do índice exato. Se o número do índice for menor que 1, seu programa deve imprimir "Before Grade 1" .
**/

#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main()
{
    int i, letters = 0, sentences = 0, words = 0, grade;
    string text = get_string("Text: ");
    //printf("%s\n", text);
    //printf("%lu", strlen(text));

    for (i = 0; i < strlen(text); i++)
    {
        // qualquer ocorrência de um ponto final, ponto de exclamação ou ponto de interrogação indica o final de uma frase.
        //printf("%c\n", text[i]);
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
            words++;
        }
        else if((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
            if(text[i+1] == ' ')
                words++;
        }

        if(text[i] == ',')
            words++;
    }

    printf("l: %d\ns: %d\nwords: %d\n", letters, sentences, words);
    letters = (float) letters / words * 100;
    sentences = (float) sentences / words * 100;
    grade = (int) (0.0588 * letters - 0.296 * sentences - 15.8);

    if(grade < 1)
        printf("Before Grade 1\n");
    else if(grade > 16)
        printf("Grade 16+\n");
    else
        printf("Grade %d\n", grade);

}