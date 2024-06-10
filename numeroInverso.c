#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void inversa (int *);
int main()
{
    int a;
    printf("ingrese un numero ");
    scanf("%d",&a);
    inversa(&a);
    printf("el numero inverso es %d",a);


    return 0;
}
void inversa (int *x)
{
int s;
*x*=-1;
}
