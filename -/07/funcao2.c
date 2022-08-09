#include <stdio.h>
#include <locale.h>

void soma(); /* Declaracao da funcao */

void main() 
{
    setlocale(LC_ALL, "Portugues");
    soma(); /* Chamada da funcao que sera executado */
}

void soma()
{    /* o num1 usando o igual = mais 0 estou declando que esta vazio */
    int num1=0, num2=0, resultado=0;
    printf("\nDigite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    resultado=num1+num2;
    /* Aqui ele vai pular uma linha "/n" depis ele vai pegar o valor %d e mais o valor %d e = soma os dois %d, ou seja seria como se fosse num1 + num2 = resultado  */
    printf("\n %d + %d = %d", num1, num2, resultado);
}

/* Scanf serve para funcao com entrada de usuario ou seja o usuario vai definir */
/* Funcao sem passagem de parametros */

/* Esse programa le dois numeros inteiros, guarda eles e depois o soma */