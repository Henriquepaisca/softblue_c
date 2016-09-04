#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct meuStruct{

    int x;
    double y;
    char z[10];
};

int main(){

  char *c = NULL;

  //gravar e ler uma struct em um arquivo
  FILE *arquivo;
  struct meuStruct msGravar, msLer;

  msGravar.x = 15;
  msGravar.y = 25.75;
  strcpy(msGravar.z, "Minhoca");

//GRAVAÇÃO (binario)
arquivo = fopen("RegistroEstrutura.txt", "wb");
fwrite(&msGravar, sizeof(struct meuStruct), 1, arquivo);
fclose(arquivo);


//LEITURA (binario)
arquivo = fopen("RegistroEstrutura.txt", "rb");
fread(&msLer, sizeof(struct meuStruct), 1, arquivo);
fclose(arquivo);

printf("x = %d, y = %f, z = %s", msLer.x, msLer.y, msLer.z );


  scanf("%c", &c );
  return 0;
}
