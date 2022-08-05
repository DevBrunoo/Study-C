#include <stdio.h>
#include <locale.h>

/* Declaracao de variaveis */
int num1=0, num2=0, resultado=0;

void main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1 numero: ");
    scanf("%d", &num1); 
    printf("Digite o 2 numero: ");
    scanf("%d", &num2); 
    resultado = soma(num1, num2);
    printf("\n\n%d + %d = %d", num1, num2, resultado);

}
/* Aqui pede para que o usuario digite um numero, assim ele amazerna o numero na variavel */

/* int porque a funcao vai retorna para funcao que chamo ela, n1 e como se fosse a variavel  */
 /* A variavel res guarda a soma dessas duas variaveis */
int soma(int n1, int n2)
{   
    int res;
    res = n1+n2;
    return res; 
}
/* quando a soma e feita esse return ele e copiado para essa variavel resultado */

/* Essa funcao utiliza passagem de parametros */
/* A funcao recebe como parametro dois numeros inteiros, e realiza a soma destes dois numeos e retorna o resultado da soma para o programa que faz a chamada da funcao */