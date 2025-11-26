#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float sal;

    printf("Qual seu salário?");
    fflush(stdin);
    scanf("%f", &sal);

    if(sal > 5000){
         printf("Seu salário é maior que R$5.000,00");
    }else{
         printf("Seu salário é menor que R$5.000,00");
    }
    
    
    
    system("pause");
    return 0;
}