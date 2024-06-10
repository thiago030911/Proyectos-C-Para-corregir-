#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void mayor (int *,int *);
int main()
{
    int a,b;
    printf("ingrese un numero ");
    scanf("%d",&a);
    printf("ingrese otro numero ");
    scanf("%d",&b);
    mayor(&a,&b);
    printf("el numero mas grande es %d y el menor es %d",a,b);

    return 0;
}
void mayor(int *x,int *y)
{
    int a;
if(*x<*y)
{
    a=*x;
    *x=*y;
    *y=a;
}
}




