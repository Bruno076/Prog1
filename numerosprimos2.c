#include <stdio.h>
/****************************************************
* Trab 2 : Numeros Primos
* Nome e Matricula: Bruno Legentil de Matos/ 0050015204
* Professor: Alex Salgado
*****************************************************/
int main ()

{
    int i,cont,n,again;
    i;
    cont;
    do{ do
    {
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &n);}
    while(n<=0);
    i=2;
    cont=1;

    if(n<=1)
        cont=0;

    while (cont ==1 && i<=n/2){
        if(n%i ==0)
            cont=0;
        i=i++;
    }

    if(cont==1)
        printf("%d e primo\n", n);
    else
        printf("%d nao e primo\n", n);
        printf("\nDeseja continuar?(1-Sim/2-Nao)");
        scanf("%d", &again);
    }while(again==1);

    return 0;
}
