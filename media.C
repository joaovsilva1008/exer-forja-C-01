// Inclui a biblioteca stdio.h que permite usar a entrada e saida de infos.(printf e scanf)
#include <stdio.h>

// Inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include <stdlib.h>

// declarar a funcao principal, onde o pprograma começa sua execucao
int main(){

    float num1, num2, num3, respMedia;

    printf("Digite o primiero número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
     printf("Digite o segundo número: ");
    scanf("%f", &num3);

    respMedia = (num1 + num2 + num3) /3;
    printf("A média dos números é: %.2f", respMedia);

    // pausar o sistema ate que o usuario pressione qualquer tecla
    system("pause");
    // finalizamo programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}