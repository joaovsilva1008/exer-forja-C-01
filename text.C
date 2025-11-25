#include<stdio.h>
#include<stdlib.h>

int main(){

    //declara uma string com tamanho maximo de 50 caracters
    char nome[50];

    printf("digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("O nome digitado foi: %s \n", nome);

    system("pause");
    return 0;
}