#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a=1;
    int max=0,min=0;
    do{
        printf("ingrese un numero(ingrese 0 para salir del sistema): ");
        scanf("%d",&a);
        if(a>0)
            max=max+1;
        else
            min=min+1;

    }while(a!=0);
    printf("los numeros negativos son %d\n",min);
    printf("los numeros positivos son %d",max);

    return 0;
}
