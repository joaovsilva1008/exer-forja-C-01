//inclui a biblioteca stdio.h, permite o uso de entrada
//e saida de valores como o print
#include<stdio.h>
//Inclui a biblioteca stdlib.h
//pra funcoes utilitarias como o system 
#include<stdlib.h>

//Inicio da função, onde o programa começa a ser executado
int main(){

    float num1 = 200, num2 = 100.45;
   // float num2 = 200;

    //printar o nome das variaveis 
    printf("%f %f", num1, num2);

    //pause o programa, até que o usuario pressione qualquer tecla 
    system("pause");
    //finaliza o programa retornando 0, indicando que deu tudo certo 
    return 0;
}

