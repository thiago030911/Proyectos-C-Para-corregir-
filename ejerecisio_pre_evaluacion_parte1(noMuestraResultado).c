#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void caja (int );
void importe (int ,int );
int main()
{
    int sec,caj;
    char a[30];
    do{
    printf("ingrese la seccion");
    scanf("%d",&sec);
    switch(sec)
    {
    case 1:printf("ingrese la caja donde quiere ser atendido");
    scanf("%d",&caj);
    caja(caj);
        break;
    case 2:printf("ingrese la caja donde quiere ser atendido");
    scanf("%d",&caj);
    caja(caj);
        break;
    case 3:printf("ingrese la caja donde quiere ser atendido");
    scanf("%d",&caj);
    caja(caj);
        break;
    }
    printf("quiere seguir operando? ");
    scanf("%s",&a);
    }while(a=='n');


    return 0;
}
void caja (int x)
{
    int a=0,b=0,c=0,d=0,e=0,f=0;
    int a1,a2,a3,a4,a5,a6;
    int b1,b2,b3,b4,b5,b6;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
    switch(x)
    {
    case 1:a=a+1;
    printf("ingrese el importe de la venta");
    scanf("%d",&a1);
importe(a1,c1);
    printf("ingrese la cantidad de productos comprados");
    scanf("%d",&b1);
        break;
    case 2:b=b+1;
     printf("ingrese el importe de la venta");
    scanf("%d",&a2);
    importe(a2,c2);
    printf("ingrese la cantidad de productos comprados");
    scanf("%d",&b2);
        break;
    case 3:c=c+1;
     printf("ingrese el importe de la venta");
    scanf("%d",&a3);
    importe(a3,c3);
    printf("ingrese la cantidad de productos comprados");
    scanf("%d",&b3);
        break;
    case 4:d=d+1;
     printf("ingrese el importe de la venta");
    scanf("%d",&a4);
    importe(a4,c4);
    printf("ingrese la cantidad de productos comprados");
    scanf("%d",&b4);
        break;
    case 5:e=e+1;
     printf("ingrese el importe de la venta");
    scanf("%d",&a5);
    importe(a5,c5);
    printf("ingrese la cantidad de productos comprados");
    scanf("%d",&b5);
        break;
    case 6:f=f+1;
     printf("ingrese el importe de la venta");
    scanf("%d",&a6);
    importe(a6,c6);
    printf("ingrese la cantidad de productos comprados");
    scanf("%d",&b6);
        break;

    }
}
void importe (int x,int y)
{
    int a=0;
    if(x>500)
    {
        a=x+((10*x)/100);
        y=y+a;

    }
    else
        y=y+x;

}
