#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, resto, resul;

    printf("Informe o Primeiro Numero \n");
    scanf("%d", &a);

    printf("Informe o Segundo Numero \n");
    scanf("%d", &b);

    resul = a/b;
    resto = a%b;
    printf("O Resultado dos numeros informados = %d \n", resul);
    printf("O Resto da Divisao dos numeros informados = %d \n", resto);



    return 0;

}
