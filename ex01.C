#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char nome[50];
     int idade; 

    printf("digite seu nome: ");
    fgets(nome, 50, stdin);
    

     printf("Qual a usa idade?:");
    scanf("%d", &idade); 

    printf("Olá %sVoce tem %d anos. \n", nome, idade);
 


    system("pause");
    return 0;
}