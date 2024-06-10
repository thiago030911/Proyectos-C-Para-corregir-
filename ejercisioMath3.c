#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sumar (int );
int main()
{
    int a;
    printf("ingrese un numero para sumar ");
    scanf("%d",&a);
    sumar(a);
    printf("la suma es %d",sumar(a));



    return 0;
}
int sumar (int x)
{
    int p=0;
    if(x==1)
        p=1;
    else
    {
        p=x+sumar(x-1);
    }
    return p;
}
