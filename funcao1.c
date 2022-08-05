#include <stdio.h>
#include <locale.h> /* Precisa adiciona isso que sao biblotecas para que voce consiga criar funcoes */

void funcao1(); /* Aqui e uma declaracao da funcao */
void funcao2();
void funcao3();  
void sigaomestre();

void main()  /* main e de funcao principal na linguagem C */
{
 setlocale(LC_ALL, "Portuguese");
 funcao2();
 funcao3();
 funcao1();
 printf("\n\n");
 sigaomestre();
 printf("\n\n");
 funcao1();
 funcao2();
 funcao2();
}

void funcao1(){
    printf("Funcao 1 executada");
}

void funcao2(){
    printf("Funcao 2 executada");
}
void funcao3(){
    printf("Funcao 3 executada");
}
void sigaomestre(){
    printf("Siga o Bruno o graande mestre");
}
/* int void e a funcao principal, estamos chamando as outras funcoes abaixo que serao executadas dentro dele */
/* void e nullo */
/* A funcao pode ser varias vezes chamadas dentro da funcao principal */
/* Sempre precisa termina com ; se nao atrapalha as outras funcoes */

