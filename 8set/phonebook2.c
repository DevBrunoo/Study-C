#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person; 

int main (void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";
    
    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    

    for (int i = 0; i < 2; i++)
    { /* Usar str compare para encontrar o nome nesse caso */
         if (strcmp(people[i].name, "David") == 0)
         {
             printf("Found %s\n", people[i]);
             return 0;
         }
    }
    printf("Not found\n");
    return 1;
}


/* Se strcmp de nomes colchete i é igual as aspas sem aspas e isso e igual a zero significa que sao os mesmos */