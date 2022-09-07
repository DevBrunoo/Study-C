#include <cs50.h>
#include <stdio.h>
#include <string.h> /* Da algumas funcionalidades em relacao a string  */


int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strncmp(names[i], "Hermione"))
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}