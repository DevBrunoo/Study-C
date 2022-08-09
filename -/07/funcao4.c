#include <stdio.h>
#include <locale.h>

int selector(); /* Variavel selector */
int soma(); /* Declaracao de variavel */
int subtracao();

void main()
{   
    int selector;
    int v1, v2, resultado;
    setlocale(LC_ALL, "Portuguese");
    printf("Menu\n");
    printf("1- Adicao\n");
    printf("2- subtraca\n");
    printf("\n Selecione uma opcao: ");
    scanf("%d", &selector);

    switch(selector)  /* Switch case funciona como uma funcao douli do JS, ele vai chama uma funcao de acordo com escolha do cliente. Ex: O cliente no terminal vai escolher se deseja que a funcao 1 ou a 2 seja executa */   
    {
        case 1: {
            printf(" Digite o 1o numero: ");
            scanf("%d", &v1);
            printf(" Digite o 1o numero: ");
            scanf("%d", &v2);
            resultado= soma(v1+v2);
            printf("\nO %d + %d = %d\n\n", v1, v2, resultado);
            break;  
        }
        case 2:{
            printf("Digite o 1o numero: ");
            scanf("%d", &v1);
            printf("Digite o 1o numero: ");
            scanf("%d", &v2);
            resultado = subtracao(v1,v2);
            printf("\nO %d + %d = %d", v1, v2, resultado);
            break;
        }
        default:  {  /* Default e caso a opcao nao esteja ou nao seja valida, ira aparecer a mensagem */
            printf("Opcao invalida! "); 
        }
    }
}
int soma(int n1, int n2)
{
    int res;
    res=n1+n2;
    return res;
}
int subtracao(int n1, int n2)
{
    int res;
    res=n1-n2;
    return res;
}


/* v1 e v2 estao sendo usadas duas vezes dentro da mesma funcao, e nao tem problema pois sao consideradas variaveis locais */



/* Funcao com o objetivo de mostrar um menu com duas opcoes para equacoes matematicas uma de adicao e outra de subtracao */