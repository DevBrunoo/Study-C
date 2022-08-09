#include<stdio.h>

/*  */
int multiplica(int n1, int n2)
{
    int res;
    res = n1 * n2;
    return res;
}
int main(void)
{
    int v1, v2, resultado;

    printf("Digite o primeiro valor ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    resultado = multiplica(v1,v2);  /* Aqui e chamada da funcao ou seja quando execuatr e chegar nessa parte, o programa ira executar a funcao multiplica */
    printf("Resultado = %d\n", resultado);

    return 0;
}


/* Para definir uma varialvel utilizamos Int */