#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void potencia (int ,int );
int main()
{
    int a,b;
    printf("ingrese la base de la operacion ");
    scanf("%d",&a);
    printf("ingrese la potenica de la operacion ");
    scanf("%d",&b);
    potencia(a,b);

    return 0;
}
void potencia (int x,int y)
{
int a=x,b;
for(int i=0;i<y-1;i++)
{
    a=a*x;
}
printf("el resultado de la operacion es %d",a);

}
