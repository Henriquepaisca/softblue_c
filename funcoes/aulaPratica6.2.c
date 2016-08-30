#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//FUNÇÃO SIMPLES
int somaValores(int valorA, int valorB){

    int resultado;
    resultado = valorA + valorB;
    return resultado;

    //return valorA + valorB;
}

//FUNÇÃO QUE USA STRING por referencia
void strBomdia(char *str, char *nome){

    sprintf(str, "Bom dia sr(a) %s", nome);
}

// FUNÇÕES COM MATRIZES
// void imprime(int *matriz)
// void imprime(int matriz[50])
void imprime(int matriz[], int tamanho){

    int x;
    printf("\n");
    for(x=0; x < tamanho; x++){

        printf("%d " , matriz[x]);
    }
}

//PARAMETROS VARIAVEIS
int somaParametrosVariaveis(int numeroDeParametros, ...){

  int total = 0;
  int contadoDeParametros = 0;
  va_list args;
  int temp;

  va_start(args, numeroDeParametros);

  while(contadoDeParametros++ < numeroDeParametros){

      temp = va_arg(args, int);
      total += temp;
  }

  return total;
}

//  RECURSIVIDADE
int somaRecursao(int v){

    if(v == 1){
      return 1;

    }else{

        return v + somaRecursao(v-1);
    }
}

int main(int argc, char *argv[]){  //numero de parametros invocando na execução do programa, conjunto de programas

  char *c = NULL;
  int i;
  char buffer[50];
  int valores[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int (*ponteiroFuncao) (int a, ...);

  //FUNÇÃO SIMPLES com passasem de valor por meio de copia
  i = somaValores(20, 30);
  printf("\nResultado: %d", i);

//função por referencia
strBomdia(buffer, "Minhoca");
printf("\n %s", buffer );

//ARGUMENTOS DO METODO main
for (i=0; i < argc; i++ ){

    printf("\n parametro %d: %s", i, argv[i] );
}

if (argc > 1){
  strBomdia(buffer, argv[1]);
  printf("\n %s", buffer );
}

//FUNÇÕES COM MATRIZES
imprime(valores, 10);

//PARAMETROS VARIAVEIS
// primeiro parametro e a quantidade de parametros a ser somado (lidos)
i = somaParametrosVariaveis(3, 3, 4, 5);
printf("\n A soma e: %d", i );

i = somaParametrosVariaveis(3, 3, 4, 8);
printf("\n A soma e: %d", i );

i = somaParametrosVariaveis(3, 3, 4, 6);
printf("\n A soma e: %d", i );

//PONTEIRO DE FUNCAO
ponteiroFuncao = somaParametrosVariaveis;
i = ponteiroFuncao(3, 4, 2, 3);
printf("\nA soma e: %d",  i);

//RECURSIVIDADE
i = somaRecursao(5);
printf("\nA soma resursao de 5 e: %d",  i );

  scanf("%c", &c );
  return 0;
}
