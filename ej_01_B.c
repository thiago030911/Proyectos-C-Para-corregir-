#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void cargar (int ,int *);
void mostrar (int ,int *);

int main()
{
int a;
int *b;
cargar(a,*b);

return 0;
}
void cargar (int x,int *y)
{
    int e[10];
    printf("ingrese la cantidad de elementos que quiere ingresar ");
    scanf("%d",&x);
    y=(int *)malloc(x*sizeof(int));
    y=e;
    for(int i=0;i<x;i++)
    {
        printf("ingrese los numeros ");
        scanf("%d",&y);
        y++;
    }
    for(int j;j<x;j++)
    {
        printf("la direccion es %x y contiene %d\n",y,*y);
        y++;
    }


}
void mostrar (int x,int *y)
{
    y=(int *)malloc(x*sizeof(int));
printf("el vector desordenado es :");
for(int i=0;i<x;i++)
{
    printf("la direccion es %x y contiene %d\n",y,*y);
    y++;

}
}

