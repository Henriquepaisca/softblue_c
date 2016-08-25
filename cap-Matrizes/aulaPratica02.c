#include<stdio.h>
#include<stdlib.h>

int main(){
char *c;

int *matrizUnidimencional;
int **matrizBidimensional;
int x, y;

matrizUnidimencional = (int *) malloc(5 * sizeof(int));

matrizUnidimencional[0] = 15;
matrizUnidimencional[1] = 25;
matrizUnidimencional[2] = 35;
matrizUnidimencional[3] = 45;
matrizUnidimencional[4] = 55;

for (x=0; x<5; x++) {
  printf("\n matriz Unidimencional [%d] = %d", x, matrizUnidimencional[x]);
}

free(matrizUnidimencional);

matrizBidimensional = (int **) malloc(5 * sizeof(int *));

//alocando matriz de uma dimensão para dentro da matriz 0
matrizBidimensional[0] = (int *) malloc(2 * sizeof(int));
matrizBidimensional[1] = (int *) malloc(2 * sizeof(int));
matrizBidimensional[2] = (int *) malloc(2 * sizeof(int));
matrizBidimensional[3] = (int *) malloc(2 * sizeof(int));
matrizBidimensional[4] = (int *) malloc(2 * sizeof(int));

matrizBidimensional[0][0] = 1;
matrizBidimensional[0][1] = 2;
matrizBidimensional[1][0] = 3;
matrizBidimensional[1][1] = 4;
matrizBidimensional[2][0] = 5;
matrizBidimensional[2][1] = 6;
matrizBidimensional[3][0] = 7;
matrizBidimensional[3][1] = 8;
matrizBidimensional[4][0] = 9;
matrizBidimensional[4][1] = 10;

for (x=0; x<5; x++){
  for(y=0; y<2; y++){
    printf("\n Matriz bi Dimensional [%d][%d]: %d", x, y, matrizBidimensional[x][y]);
  }
}

//desalocando memoria de ponteiros de 2 dimensoes

for(x=0; x<5; x++){
  free(matrizBidimensional[x]);
}


scanf("%c\n",&c );
return 0;

}
