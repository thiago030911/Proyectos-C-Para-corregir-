#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
    int caj,imp,sec,can;
    char op[30];
    do{
   printf("ingrese numero de caja donde quiere ser atentido ");
   scanf("%d",&caj);
   switch(caj)
   {
   case 1:a1=a1+1;
   printf("ingrese el numero de seccion");
   scanf("%d",&sec);
   switch(sec)
   {
   case 1:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a4=a4+imp;
    break;
   case 2:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a5=a5+imp;
    break;
   case 3:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a6=a6+imp;
    break;
   }
   a7=a7+a4+a5+a6;
    break;
   case 2:a2=a2+1;
    printf("ingrese el numero de seccion");
   scanf("%d",&sec);
   switch(sec)
   {
   case 1:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a4=a4+imp;
    break;
   case 2:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a5=a5+imp;
    break;
   case 3:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a6=a6+imp;
    break;
   }
    a8=a8+a4+a5+a6;
    break;
    case 3:a3=a3+1;
     printf("ingrese el numero de seccion");
   scanf("%d",&sec);
   switch(sec)
   {
   case 1:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a4=a4+imp;
    break;
   case 2:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a5=a5+imp;
    break;
   case 3:printf("ingrese importe de la venta");
   scanf("%d",&imp);
   a6=a6+imp;
    break;
   }
    a9=a9+a4+a5+a6;
    break;

   }
   printf("quiere seguir operando? \n");
   scanf("%s",&op[30]);
    }while(op[30]!='n');
    printf("los comprobantes que se emitieron en la primera caja son %d\n",a1);
    printf("los comprobantes que se emitieron en la segunda caja son %d\n",a2);
    printf("los comprobantes que se emitieron en la tercera caja son %d\n",a3);
     printf("la recuadacion que se genero en la primera caja son %d\n",a7);
     printf("la recuadacion que se genero en la primera caja son %d\n",a8);
     printf("la recuadacion que se genero en la primera caja son %d\n",a9);
    return 0;
}
