#include <stdio.h>
#include <stdlib.h>

int main(){
  char *c;

  //MATRIZ UNIDIMENSIONAL (VETOR)

  int numeros[7] = {1 ,2, 3, 4, 5, 6};

  int tamanhoBytes = sizeof(numeros);
  printf("Minha matriz tem %d bytes", tamanhoBytes );
  printf("\n");

  int tamanhoPosicoes = sizeof(numeros) / sizeof(int);
  printf("Minha matriz tem %d posicoes", tamanhoPosicoes );

  //MATRIZ DE PONTEIROS

  int x = 3;
  int y = 5;
  int z = 9;

  int *matrizDePonteiros[3];

  matrizDePonteiros[0] = &x;
  matrizDePonteiros[1] = &y;
  matrizDePonteiros[2] = &z;

  x = 25;
  printf("\n");
  printf("Matriz de ponteiros passando regiao de memoria" );
  printf("\n");
  printf("%d", *matrizDePonteiros[0]);


// MATRIZ MULTIDIMENSIONAIS (MATRIZ)

 int dobros[3][2];

 dobros[0][0]=2;
 dobros[0][1]=4;

 dobros[1][0]=10;
 dobros[1][1]=20;

 dobros[2][0]=50;
 dobros[2][1]=100;

 printf("\n");
 printf("O dobro de %d: %d", dobros[2][0], dobros[2][1]);
 printf("\n");

 //ALOCAÇÃO DINAMICA DE MATRIZES

int *matriz, a;

matriz = (int *)malloc(5 * sizeof(int));

matriz[0] = 10;
matriz[1] = 15;
matriz[2] = 20;
matriz[3] = 25;
matriz[4] = 30;

for (a = 0; a < 5; a++){

    printf("%d\n", matriz[a]);
}

free(matriz);
  scanf("%c\n", &c );
  return 0;
}
