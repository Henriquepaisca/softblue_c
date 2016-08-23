#include <stdio.h>
#include <stdlib.h>

void somaUmNormal(int i){

    i = i + 1;
}

void somaUmPonteiro(int *i){

    *i = *i + 1;
}


 int main() {
  char *c;

  int a, b;

  int *pi = NULL;
  int **ppi = NULL;
  int *matrizInteiro = NULL;
  int matrizSemPonteiro[5] = {2, 4, 6, 8, 10};

// Uso tradicional

a = 5;
b = a;
printf("\n a = %d, b = %d", a, b);

a = 5;
b = a;
a = 8;
printf("\n a = %d, b = %d", a, b);
printf("\n a = %d (%d), b = %d (%d)", a, &a, b, &b);

//PONTEIRO

a = 5;
pi = &a;
a = 8;

printf("\n a = %d, pi = %d", a, pi);
printf("\n a = %d, pi = %d", a, *pi);

// PONTEIRO PARA PONTEIRO

a = 5;
pi = &a;
ppi = &pi;
printf("\n a = %d, pi = %d, ppi = %d", a, *pi, ppi);
printf("\n a = %d, pi = %d, ppi = %d", a, *pi, *ppi);
printf("\n a = %d, pi = %d, ppi = %d", a, *pi, **ppi);

//PASSAGEM DE PARAMETRO POR VALOR (passa uma copia)

a = 5;
somaUmNormal(a);
printf("\n Soma Normal: a = %d", a); //não tem efeito sobre a

//PASSAGEM DE PARAMETRO POR REFERENCIA (passa um apontamento de região de memoria)

a = 5;
somaUmPonteiro(&a);
printf("\n Soma Ponteiro: a = %d", a);


//ALOCAÇAO DINAMICA DE MEMORIA

matrizInteiro = (int *) malloc(5 * sizeof(int)); //numero de bytes ocupados por int * 5 para alocar

if (!matrizInteiro){

    printf("ERRO");
}

matrizInteiro[0] = 5;
matrizInteiro[1] = 10;
printf("\n posicao [0] = %d, posicao [1] = %d", matrizInteiro[0], matrizInteiro[1] );
free(matrizInteiro);

//ARITIMETICA DE PONTEIRO (aponta para proxima posição de mesmo tipo)
pi = &matrizSemPonteiro[0];
printf("\n pi vale agora: %d", *pi );

pi ++;
printf("\n pi vale agora: %d", *pi );

pi += 2;
printf("\n pi vale agora: %d", *pi );

pi --;
printf("\n pi vale agora: %d", *pi );

scanf("%c\n", &c );
return 0;
}
