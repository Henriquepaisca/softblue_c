#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//STRUCT SIMPLES
struct estruturaPessoa{

    char nome[30];
    unsigned int idade;
    double peso;
}p1; //variavel

//estrutura que contem outra estrutura

struct casal{

    struct estruturaPessoa marido;
    struct estruturaPessoa esposa;
};

//Union (compartilha a mesma memoria)
union minhaUnion{

    int x;
    double y;
    char z[10];
};

struct meuStruct{

    int x;
    double y;
    char z[10];
};

//Typedef (da apelidos a estruturas e tipo de dados)
typedef struct estruturaPessoa pessoa;
typedef int inteiro;


//metodos e funcções que recebem como parametro uma struct
void imprimiPessoa(struct estruturaPessoa p){

  printf("\n %s tem %d anos e pesa %.2f Kg.", p.nome, p.idade, p.peso );

}

int main(){

    char *c = NULL;

    //criando variavel da STRUCT
    struct estruturaPessoa p2;
    //typedef
    pessoa p3;

    //variavel estrutura de matrizes
    struct estruturaPessoa turma[50];

    //ponteiros para estrutura
    struct estruturaPessoa *pe;

    //estrutura que contem outra estrutura
    struct casal namorados;

    //Union
    union minhaUnion mu;
    struct meuStruct ms;

    //typedef
    inteiro i;



    strcpy(p1.nome, "Joao");
    p1.idade = 25;
    p1.peso = 70.5;
    printf("\n %s tem %d anos e pesa %.2f Kg.",p1.nome, p1.idade, p1.peso );

// estrutura de matrizes
    strcpy(turma[0].nome, "Maria");
    turma[0].idade = 31;
    turma[0].peso = 71;
    printf("\n %s tem %d anos e pesa %.2f Kg.",turma[0].nome, turma[0].idade, turma[0].peso );

    //imprimindo com a funcao
    imprimiPessoa(p1);
    imprimiPessoa(turma[0]);

    //ponteiro para estrutura (usa -> para acessar a região de memoria)
    pe = &p1;
    printf("\n Nome da pessoa via ponteiro: %s", pe -> nome);

    //estrutura que contem outra estrutura

    namorados.marido = p1;
    namorados.esposa = turma[0];
    printf("\n %s e %s e um lixo.", namorados.marido.nome, namorados.esposa.nome );

    //Union
    printf("\n Bytes ocupados por mu: %d", sizeof(mu));
    printf("\n Bytes ocupados por ms: %d", sizeof(ms) );

    printf("\n");
    //Typedef
    for(i=0; i < 10; i++){

        printf("%d ", i );
    }

    scanf("%c",&c);
    return 0;
}
