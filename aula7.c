/********
*
*Nome:Bruno Legentil
*Calculo Fatorial
*
***************/
#include <stdio.h>

int main()
{
    int num;
    int i;
    int fat;

    do{
        printf("Entre com um numero:\n");
        scanf("%d, &num");
    }
    while(num<=0);

    //calcular o fatorial;
    fat=1;
    for(i=num; i>=1; i--)
    {
        fat = fat * i;
    }
    printf("O fatorial=%d", fat);

    return 0;
}
