// Simulate genetic inheritance of blood type

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Each person has two parents and two alleles
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
}
person;

const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void)
{
    // Seed random number generator
    srand(time(0));

    // Create a new family with three generations
    person *p = create_family(GENERATIONS);

    // Print family tree of blood types
    print_family(p, 0);

    // Free memory
    free_family(p);
}

// Create a new individual with `generations`
person *create_family(int generations)
{
    // TODO: Allocate memory for new person
    person *p = malloc(sizeof(person)); /* Aqui chamamos malloc alocando memoria suficiente para uma nova pessoa, slavando o ponteiro retornando dentro de p. Então p acaba virando essa nova memoria que acabamos de alocar.    */
    // If there are still generations left to create
    if (generations > 1)
    {

        // TODO: Set parent pointers for current person
       p->parents[0] = create_family(generations - 1); /* Qualquer ponteiro que recebemos sera um ponteiro para um pai, então amarzenamos dentro de apis 0. A funcao p -> esta apontando para parentes pois ela que se vai amarzenar  */
       p->parents[1] = create_family(generations - 1); /* Aqui fazemos a mesma coisa do que de cima. Chamamos a funcao create_family nas gerações menos 1 e salva a saida dela dentro dos pais 1.  */
        // TODO: Randomly assign current person's alleles based on the alleles of their parents
        p->alleles[0] = p->parents[0]->alleles[rand() %2];
        p->alleles[1] = p->parents[1]->alleles[rand() %2];
    }

    // If there are no generations left to create
    else
    {
        // TODO: Set parent pointers to NULL
        p->parents[0] = NULL;
        p->parents[1] = NULL;
        // TODO: Randomly assign alleles
        p->alleles[0] = random_allele();
        p->parents[1] = random_allele();
    }

    // TODO: Return newly created person
    return p;
}

// Free `p` and all ancestors of `p`.
void free_family(person *p)
{
    // TODO: Handle base case
    if (p == NULL)
    {
        return;
    }

    // TODO: Free parents recursively
    free_family(p->parents[0]);
    free_family(p->parents[1]);
    // TODO: Free child
    free(p);

}

// Print each family member and their alleles.
void print_family(person *p, int generation)
{
    // Handle base case
    if (p == NULL)
    {
        return;
    }

    // Print indentation
    for (int i = 0; i < generation * INDENT_LENGTH; i++)
    {
        printf(" ");
    }

    // Print person
    if (generation == 0)
    {
        printf("Child (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }
    else if (generation == 1)
    {
        printf("Parent (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }
    else
    {
        for (int i = 0; i < generation - 2; i++)
        {
            printf("Great-");
        }
        printf("Grandparent (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }

    // Print parents of current generation
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

// Randomly chooses a blood type allele.
char random_allele()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}


/* 
Esse programa tem como tarefa principal simular a herança de genes do tipo sanguineo de varias gerações em uma familia 

O primeiro passo foi escrever a função para criar essa familia, alocando memoria para todas as pessoas dessa familia e herdar todos os tipos sanguineo de pais para filhos.
Usamos a funcao create_family, que era para alocar memoria para uma nova pessoa, entao chamamos malloc, alocando memoria suficiente para uma pessoa retornando dentro de p, com isso p sera essa nova memoria que acabamos de alocar
Em seguida nos damos com dois casos, um em que gerações e maior que 1, o que significa que essa pessoa que acabamos de alocar tem pais porem ainda temos que lidar com o caso quando a pessoa não tem pais, que representaremos no programa 

Vamos começar com a geracao que tem pais, o que precisamos fazer nesse caso e chamar a funcao create_family para criar arvores geneologicas pais, o que significa que se chamamos create_family  para  gerar duas geracoes de pais, com isso precisamos criar arvores parentais e geneologicas, cada uma com uma geração de pais, gerando arvores genealogicas que e cada uma com uma geraçao de pais gerando arvores genealogicas que tem um numero a menos de gerações.
Para criar uma arvore geneologica pai, chamamos a funcao create_family em geracoes menos 1,  uma geracao a menos do que as geraçoes com quais começamos. Agora depois de gerar esses pais, o proximo passo sera herdar um alelo de cada um desses pais, fazeremos isso da seguinte forma vamos usar essas notação de seta para acessar algum campo, se tivermos uma pessoa p, podemos acessar seu primeiro pai a seta p 0. Uma vez que temos esse pai podemos acessar os alelos dele.
Lembresse que alelos e uma matriz de dois caracteres, ha alelo como 0 e há alelo como 1 e nos so precisamos escolher um deles aleatoriamente. 

Para obtermos um numero aleatorio que e 0 e 1, podemos usar a funçao rand, que nos dara um inteiro aleatorio.

Entao usamos mod 2 para obter o resto quando dividido por 2, se um numero for impar entao iremos obter 1, o efeito por tras disso e que na metade da vezes obteremos 0 e na outra 1 com isso conseguimos escolher de forma aleatoria o do pai e o do filho. 
Repetimos a mesma coisa para o segundo pai, dentro do alelo 1 da seta p, vamos armazenar um alelo do segundo pai, usamos a mesma logica de antes usando mod 2 para nos obter um numero psudo aleatorio que sera 0 para o primeiro alelo ou 1 para o segundo alelo. 
Esse foi projetado para lidar com o individo que nao tem dados dos pais, nesse caso se nao tivermos dados dos pais esses dois ponteiros sao definidos como NULL.

Especificando alelos de tipo sanguineio como 0 ou A e B para essas pessoas tambem, e se eles nao tiverem pai vamos apenas gerar alelo aleatorio que os darao alelos aleatorios. Depois de alocar toda essa memoria usando mallocm precisamos ter certeza que a liberamos entao usamos a função free_family se a entrada para duncao free_family for nula entao nao ha nada que nossa funcao precisa fazer, porem nao esqueca de libertar os pais que podem ter os seus pais para serem libertados entao chamamos a funcao free_familly, liberando assim sucetivamente chegamos a geracao que nao tem dados dos pais, o que significa que ambos os pais sao nulos. 
A ultima coisa que fazeremos para via malloc chamamos a funcao free, depois passamos como entrada esse ponteiro p para liberar este ultimo dado tambem, uma vez isso feito podemos alocar memoria para todas as pessoas dentro da arvore gealogica.

"
O que deve ser feito

1) simule seus tipos sanguíneos
2) e imprimi-los e, em seguida, 
3) liberar todos esses dados no final.

"

23/04/2023
 */