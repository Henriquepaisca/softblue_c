#include <stdio.h>
#include <stdlib.h>

int totalDeTrocas;
int totalDeComparacoes;


//funcao troca de valores
void trocaValores(int *var1, int *var2){

    int temp;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;

    totalDeTrocas++;
}

//funcão exibir vetor
void exibeVetor(int vetor[], int numeroDeElementos){

    int x;
    printf("\n ");
    for (x=0; x < numeroDeElementos; x++) {
      printf("%d ", vetor[x]);
    }
}

//BubbleSort
void bubbleSort(int vetor[], int totalElementos){

    int x, y;

    for(x=1; x < totalElementos; x++){

        for(y=totalElementos-1; y >=x; y--){
            totalDeComparacoes++;
            if(vetor[y-1] > vetor[y]){
                trocaValores(&vetor[y-1], &vetor[y]);
            }
        }
    }
}

//QUICKSORT
void quickSort(int vetor[], int esquerda, int direita){

    int x, y, meio;

    x = esquerda;
    y = direita;

    meio = vetor[(esquerda + direita)/2];

    do{

      while(vetor[x] < meio && x < direita)
          x++;

      while (meio < vetor[y] && y > esquerda)
          y--;

      totalDeComparacoes++;
      if (x <= y){

          trocaValores(&vetor[x], &vetor[y]);

          x++;
          y--;
      }

    }while (x <= y);

  if (esquerda < y)
      quickSort(vetor, esquerda, y);

  if (x < direita)
      quickSort(vetor, x, direita);
}

//BUSCA SEQUENCIAL
int buscaSequencial(int vetor[], int numeroDeElementos, int buscarPor){

    int x;

    for (x=0; x <= numeroDeElementos; x++){

        if(vetor[x] == buscarPor){

            return x;
        }
    }

    return -1;
}

//BUSCA BINARIA (só funciona com vetor ordenado)
int buscaBinaria(int vetor[], int numeroDeElementos, int buscarPor){

    int comeco, meio, fim;

    comeco = 0;
    fim = numeroDeElementos-1;

    while(comeco <= fim ){

        meio = (comeco + fim) /2;

        if(buscarPor < vetor[meio]){

            fim = meio -1;

        }else if(buscarPor > vetor[meio]){

            comeco = meio +1;
        }else{

            return meio;
        }
    }

    return -1;
}


int main(){

  char *c = NULL;

  int vetorA[10] = {2, 5, 8, 4, 15, 25, 9, 18, 27, 1};
  int vetorB[10] = {2, 5, 8, 4, 15, 25, 9, 18, 27, 1};

  int numeroDeElementos = 10;
  int posicao;

  totalDeComparacoes = 0;
  totalDeTrocas = 0;

  exibeVetor(vetorA, numeroDeElementos);
  bubbleSort(vetorA, numeroDeElementos);
  exibeVetor(vetorA, numeroDeElementos);
  printf("\n %d comparacoes, %d trocas, %d operacoes", totalDeComparacoes, totalDeTrocas, totalDeComparacoes + totalDeTrocas );

  totalDeComparacoes = 0;
  totalDeTrocas = 0;

  exibeVetor(vetorB, numeroDeElementos);
  quickSort(vetorB, 0, numeroDeElementos-1);
  exibeVetor(vetorB, numeroDeElementos);
  printf("\n %d comparacoes, %d trocas, %d operacoes", totalDeComparacoes, totalDeTrocas, totalDeComparacoes + totalDeTrocas );

  int buscarPor = 90;

  posicao = buscaSequencial(vetorA, numeroDeElementos, buscarPor);
  printf("\n Resultado da busca Sequencial: %d", posicao );

  posicao = buscaBinaria(vetorA, numeroDeElementos, buscarPor);
  printf("\n Resultado da busca Binaria: %d", posicao );


  scanf("%c",&c);
  return 0;
}
