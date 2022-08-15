#include <c.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);  /* Aqui esta a funcao responsavel pela pontuacao ela determina quntos pontos a palavra digitada vale, temos que declarara antes de usala */

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Scoreskrkrpjp both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    // Print the winner
    if (score1 > score2)      /* Se scoreq for que score2 aparecera  "Jogador 1 vencedor" */
    {
        printf("Player 1 wins!\n");  
    }
    else if (score1 < score2)  /* Se score1 for menor que score2 aparecera jogador2 vencedor */
    {
        printf("Player 2 wins!\n");
    }
    else  /* Se a pontuacao for a mesma aparecera "Tie"  */
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
       //Keep track of score
       int score = 0;   /* Inteiro chamado score igual a zero, essa e uma variavel que vai acompnhar a pontuacao da palavra atual */
       /* i vai representar o indice do caractere,  */
       //Compute score for each character, utilizamos strlen ara acessa o comprimento da string armazenando isso dentro de uma variavel chamada len (Iremos repetir esse lop enquanto i for menor que len, aumentado i toda vez que esse loop completar uma interação)
       for (int i = 0, len = strlen(word); i < len; i++) /*  */
       {
           if(isupper(word[i]))
           {
               score += POINTS[word[i] - 'A'];
           }
           else if (islower(word[i]))
           {
               score += POINTS[word[i] - 'a'];
           }
       }
       return score;
}


/* 
The isupper() function checks whether a character is an uppercase alphabet (A-Z) or not.
A função islower() verifica se um caractere é alfabeto minúsculo (az) ou não.
Even though islower() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.
Both isupper() and islower() are> by <ctype.h>


 */