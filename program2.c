#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define get_string(__VA_ARGS__) get_string(NULL, __VA_ARGS__)



int main(void)
{ 
    //Prompt user for text
    string text = get_string("Text: ");
    printf("%s\n", text);

    //Count the numer of letters there are in the //-2
    int letters = 0;
    for(int i = 0; 1 < strlen(text); i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') ||
            (text[i] >= 'A' && text[i] <= 'Z'))
        letters++;
    }
    printf("%i letters\n", letters);
}

/* 
Sempre que digitamos um texto o sistema imprimir de volta a string de texto para nos vermos.
----2
Nesse iremos tambem contar o numero de letras existente
----3

 */