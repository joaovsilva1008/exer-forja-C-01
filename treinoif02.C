#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int age1, age2;

    printf("Informe a primeira idade:");
    fflush(stdin);
    scanf("%d", &age1);
    printf("Informe a segunda idade:");
    fflush(stdin);
    scanf("%d", &age2);

    printf("\n");

    if(age1 > age2){
        printf("A maior idade é %d .\n", age1);
    }else if(age1 == age2){
       printf("As idades são as mesmas .\n");
    }else{
      printf("A maior idade é %d .\n", age2);
    }

 system("pause");
    return 0;
}
