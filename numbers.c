#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
   /* Aqui e um loop, se o numero 0 for 0 implemeta mais um ate chegar ao 7 chegando la retorna Found */
    for (int i = 0; i < 7; i++)
    {
        printf("Found\n");
        return 0;
    }
    {
        printf("Not found\n");
        return 1;
    }

}

/* 
Para rodar no terminal

make numbers
./numbers
 */