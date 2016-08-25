#include <stdio.h>
#include <stdlib.h>

int main(){

char *c;

//matrizes

int x, y;
int matrizA[5] = {2, 2, 3, 3, 4};
int matrizB[5];
int *matrizC = NULL;
int *matrizD[5];
int matrizBD[2][3] = {{1,2, 3}, {4, 5, 6} };


matrizB[0] = 1;
matrizB[1] = 3;
matrizB[2] = 5;
matrizB[3] = 7;
matrizB[4] = 9;

for(x = 0; x < 5; x++){

  printf("\n matrizA[%d] = %d, matrizB[%d] = %d", x, matrizA[x], x, matrizB[x]);
}
printf("\n");

for(x=0; x < sizeof(matrizA) / sizeof(int); x++){
  printf("\n matrizA[%d] = %d, matrizB[%d] = %d", x, matrizA[x], x, matrizB[x]);

}

//matriz com alocação dinamica

matrizC = (int *) malloc(5 * sizeof(int));
matrizC[0] = 10;
matrizC[1] = 20;
matrizC[2] = 30;
matrizC[3] = 40;
matrizC[4] = 50;

printf("\n");

for(x = 0; x < 5; x++){

  printf("\n matrizC[%d] = %d", x, matrizC[x]);
}

free(matrizC);

//MATRIZ DE PONTEIROS

matrizD[0] = &matrizA[0];
matrizD[1] = &matrizA[1];
matrizD[2] = &matrizB[0];
matrizD[3] = &matrizB[1];
y = 3;
matrizD[4] = &y;


for(x = 0; x < 5; x++){

  printf("\n matrizD[%d] = %d", x, matrizD[x]);
}

// Matrix bi-dimensional
matrizBD[0][0] = 55;
matrizBD[1][2] = 111;

for(x=0; x<2; x++){
  for(y=0; y<3; y++){
    printf("\n matrizBD[%d][%d] = %d", x, y, matrizBD[x][y] );
  }
}


  scanf("%c",&c);
  return 0;
}
