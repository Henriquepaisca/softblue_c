#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  //Declarações de variaveis
  char *c = NULL;

  char strA[6] = "teste";
  char strB[6] = {'t', 'e', 's', 't', 'e'};
  char strC[] = "teste";
  char *strD;
  char ch;

  int x;
  char buffer[50];
  char matrizDeString[3][20];
  char *resultado;
  char ascii;
  char minhaStringInt[3] = "50";
  char minhaStringDouble[4] = "2.3";
  double y;

  strD = "teste";

  printf("\n%s", strA );
  printf("\n%s", strB );
  printf("\n%s", strC );
  printf("\n%s", strD );

printf("\n Digite uma string: " );
// gets(strA); puts(strA); não funciona mais perigoso

//fgets pega a string e mais um /0 no final
fgets(strA, 6, stdin); // entrada, tamanho e fonte de leitura
strtok(strA, "\n"); //entrada, caracter que quer limpar (limpa o buffer)
if (strlen(strA) == 5){

    while((ch = getchar()) != '\n' && ch != EOF);  //limpa o buffer
}
puts("Texto digitado: ");
puts(strA);


//matriz de string

for (x = 0; x < 3; x++){

  sprintf(buffer, "\nDigite o nome %d: ", x);
  puts(buffer);

  fgets(matrizDeString[x], 20, stdin);
  strtok(matrizDeString[x], "\n");
  if (strlen(matrizDeString[x]) == 20 - 1){

    while((ch = getchar()) != '\n' && ch != EOF);
  }
}
  for (x = 0; x < 3; x++){
    puts(matrizDeString[x]);
  }

puts("funcoes interessantes");

//copia de string
strcpy(buffer, "Novo valor");
puts(buffer);

//concatenar string
strcat(buffer, " concatenado");
puts(buffer);

//tamanho da string

x = strlen(buffer);
sprintf(buffer, "o tamanho do buffer era: %d", x);
puts(buffer);


// comparar string (strcmp)
strcpy(buffer, "minhoca");

if (!strcmp(matrizDeString[0], buffer)){
  puts("igual");

}else{
  puts("diferente");
}

//busca substring (strstr)  mais o restante
//strchr busca um caractere (localização do caractere e o restante da string)
//strrchr (um r a mais faz a busca reversa de tras para frente)

strcpy(buffer, "minha string bonitona de teste");

resultado = strchr(buffer, 'i');
puts(resultado);

resultado = strstr(buffer, "string");
puts(resultado);

//posição da ocorrencia do caractere i
resultado = strchr(buffer, 'i');
printf("\nPosicao da ocorrencia: %d", resultado - buffer + 1);

//posição da ultima ocorrencia do caractere i
resultado = strrchr(buffer, 'i');
printf("\nPosicao da ocorrencia: %d", resultado - buffer + 1);

//navegar pelas ocorrencias de um caractere

resultado = strchr(buffer, 'i');
while(resultado != NULL){

  printf("\nEncontrou em: %d", resultado - buffer +1 );
  resultado = strchr(resultado + 1 , 'i');
}

//Uso do codigo ASCII

ascii = 'A';
printf("\nCaractere e seu codigo ascii: %c (%d)", ascii, ascii );

ascii = 66;
printf("\nCaractere e seu codigo ascii: %c (%d)", ascii, ascii );

//caracteres de escape
printf("\n Curso de \"C\" " );

printf("\n Tabulacao \t uso da barra \\");

//conversao de string para valor inteiro e float (atoi e atof)

x = atoi(minhaStringInt);
printf("\n A soma de %d com 10 resulta em: %d", x, x+10 );

y = atof(minhaStringDouble);
printf("\nO dobro de %f e: %f", y, y*2 );

  scanf("%c", &c);
}
