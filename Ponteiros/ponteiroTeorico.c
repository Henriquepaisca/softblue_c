#include <stdio.h>
#include <stdlib.h>

// função sem ponteiro
void soma(int p1){
  p1 = p1 + p1;
}

//função com ponteiro (passa o endereço de X, assim ele é alterado)
void somaPonteiro(int *p1) {

    *p1 = *p1 + *p1;
}

main(){
  int x=4;
  soma(x);
  printf("%d\n",x);

  printf("%d\n", x);
  somaPonteiro(&x);

  printf("%d\n",x);
}
