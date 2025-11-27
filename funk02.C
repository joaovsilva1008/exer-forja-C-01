#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int quad(int x);

int main(){
  setlocale(LC_ALL, "Portuguese");

  int num, res;

  printf("Digite um número: ");
  scanf(" %d", &num);

  res = quad(num);
  printf("O quadrado de %d é: %d \n", num, res);


  system("pause");
    return 0;

}

int quad(int x){
    int quadrado;

    quadrado = x*x;
    return quadrado;
}
    
