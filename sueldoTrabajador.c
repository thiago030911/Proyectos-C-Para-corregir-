#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a;
    int b;
    int d;
    int e;
    printf("ingrese horas trabajadas");
    scanf("%d",&a);
    printf("ingrese la antiguedad");
    scanf("%d",&b);
    e=(4500*2*b)/100;
    d=4500+e;
    printf("el sueldo neto es%d\n",d);



    return 0;
}
