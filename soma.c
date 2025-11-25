// Inclui a biblioteca stdio.h que permite usar a entrada e saida de infos.(printf e scanf)
#include <stdio.h>

// Inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include <stdlib.h>

// declarar a funcao principal, onde o pprograma começa sua execucao
int main(){

    float num1, num2, respSoma;

    printf("Digite o primiero número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    respSoma = num1 + num2;
    printf("A soma dos números é: %.2f", respSoma);

    // pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");
    // finalizamo programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}