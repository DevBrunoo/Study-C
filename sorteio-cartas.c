#include <stdio.h>
#include <stdlib.h>
#include <time.h>      /* E priciso incluir essa biblioteca para fazer os sorteios */

/* Array (Char e String) */

int main(int argc, char *argv[]) {
    srand(time(NULL));
    char faces[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q', 'K'};
    char nipes[4][8] = {"Espadas", "Paus", "Copas", "Outros"};
    printf("\n\n%c de %s\n\n", faces[rand()%13], nipes[rand()%4]); /* %c representa o array faces entao ele ira fazer um sorteio de uma das faces, o de e somente um texto e por ultimo %s se refere a esse segundo array aonde tambem faz um sorteio entre as faceis    */
    system("pause");
    return 0;
}


/* 
Esse arquivo tem como base te ensinar a como criar um array do tipo char e string
Esse programa faz o sorteio de algumas caitas
O tipo char e usado para amarzenar um caractere da tabela ASCII 
[13] porque e um array com 13 casas 
O tipo char aceita apenas um caractere entao utilizamos X para amarzenar a carta 10 e assim sucetivamente 

O printf vai imprimir o indice 0 desse vetor que e a aposicao 0 do array
\n serve como quebra de linha (Pular uma linha)
Tiremos o indice e colocamos range para que se possa fazer o sorteio, colocamos %13 para que ele possa fazer o sorteio entre 0 e 12

char nipes e um array de duas dimencoes, o 4 representa o numero de strings que estamos armazenando e o  8 a quantidade maxima de caracteres que cada palavra pode ter lembrando que sempre e preciso colocar um a mais para finalizar a string. Ex: Espadas tem 7 caracteres porem e nescessario colocar 8 para que possa ser finalizado
Lembrando que Espadas e o indice 0, Paus e o indice 1, Copas e o indice 2 e Ouros e o indice 3

 */


/* 
Na linguagem C nao temos o tipo de variaveis string, porem com char e possivel amazenar uma string criando u array
 */