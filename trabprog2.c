#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, resto, resul;


    printf("Mostrador de Dividendo, Divisor, Quociente e Resto de dois numeros \n" );

    printf("Informe o Primeiro Numero \n");
    scanf("%d", &a);

    printf("Informe o Segundo Numero \n");
    scanf("%d", &b);

    resul = a/b;
    resto = a%b;
    printf("O resultado dos numero informados = %d \n", resul);
    printf("O Resto da Divisao dos numeos informados = %d \n", resto);



    return 0;

}
