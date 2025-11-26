#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char sexo;
    int idade;

    printf("Qual a idade: \n");
    scanf("%d", &idade);
    printf("Digite (M) para masculino e (F) para femenino: \n");
    scanf(" %c", &sexo);

    if (sexo == 'M')
    {
        if (idade >= 16){
            printf("Pode comprar ingressos. \n");
         }
        else{
            printf("Não pode comprar ingressos. \n");
        }
    }
    else{
        if(idade >= 18){
            printf("Pode comprar ingressos. \n");
        }
        else{
             printf("Não pode comprar ingressos. \n");
        }
    }

    system("pause");
    return 0;
}