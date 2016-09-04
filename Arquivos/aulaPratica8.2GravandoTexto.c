#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
  char *c = NULL;

  FILE *arquivo;
  char string[100];
  int i;

  //abrir arquivo formato de escrita (caminho e nome do arquivo, modo de abertura)
  arquivo = fopen("Registro.txt","w");

  if (!arquivo){
    printf("\n Arquivo inesistente" );
    scanf("%c", &c );
    return 0;
  }

  printf("\n Digite a informacao a ser registrada: ");
  gets(string);

  for (i=0; i < strlen(string); i++){

    putc(string[i], arquivo);

  }

  fclose(arquivo);


  scanf("%c", &c);
  return 0;
}
