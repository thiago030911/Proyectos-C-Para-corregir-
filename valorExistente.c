#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void num (int ,int );
int main ()
{
int a,b;
printf("ingrese un numero de 5 digitos ");
scanf("%d",&a);
printf("ingrese el disito que se desea extraer ");
scanf("%d",&b);
num(a,b);

    return 0;
}
void num (int x,int y)
{
    int a,b=100000,c=x,d=0;
    for(int i=0;i<5;i++)
    {
        b=b/10;
        a=c/b;
        c=c%b;
        if(a==y)
            printf("el valor si existe");
        else
            d=d+1;
    }
    if(d==5)
        printf("el valor %d no existe dentro del numero %d ",y,x);

}
