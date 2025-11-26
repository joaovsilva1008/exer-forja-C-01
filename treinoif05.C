#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Infome uma idade: ");
    scanf(" %d", &idade);

    if(idade >= 15 && idade <= 18) {
        printf("A idade está entre 15 e 18 ");
    }else{
        printf("Não está entre 15 e 18 ");
    }

  system("pause");
    return 0;

}