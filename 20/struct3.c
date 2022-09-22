#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // List of size 0
    node *list = NULL;
  
    // Add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;

    // Update list to point to new node
    list = n;
}

/* 

Esse programa implementa uma lista encadeada
 O sinal de * esta mandando node ir para o endereço aonde list esta alocado e se nor = a NULL ou seja nao tiver nada 
 
 
  */
