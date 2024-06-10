#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("ingrese un valor de 3 trigitos");
    scanf("%d",&a);
    b=a/100;
    c=a/10;
    e=c%10;
    d=a%10;
    printf("valor 1 %d valor 2 %d valor 3 %d",b,e,d);



    return 0;
}
