#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

  char *c = NULL;

  char buffer[10] = "";
  char caractere;

  FILE *arquivo;
  arquivo = fopen("Registro.txt","r");

  if(arquivo != NULL){

      while((caractere = getc(arquivo)) != EOF){

          if(strlen(buffer) < 9){

            // escrevendo e concatenando no buffer enquanto tamanho e menor do que 9
              sprintf(buffer, "%s%c", buffer, caractere);
          }
          else{
            //caso o tamanho do buffer tenha estourado mostra as informacoes e inicia
            //um novo buffer
              printf("%s", buffer);
              sprintf(buffer, "%c", caractere);
          }
      }

      if(strlen(buffer) > 0){

          printf("%s", buffer );
      }

      fclose(arquivo);
  }

  scanf("%c",&c);
  return 0;
}
