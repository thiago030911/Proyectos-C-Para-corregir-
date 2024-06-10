#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int algo (int );
int main()
{
    int a;
    printf("ingrese un valor decimal ");
    scanf("%d",&a);
    algo(a);
    printf("el numero en binario es %d",algo(a));

    return 0;
}
int algo (int x)
{
    int p;
    if(x<2)
        p=x;
    else
        algo(x/2);
        p=x%2;

    return p;
}
