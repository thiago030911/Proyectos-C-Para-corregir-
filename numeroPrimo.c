#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void primo (int );
int main()
{
    int a;
    printf("ingrese un numero ");
    scanf("%d",&a);
    primo(a);

    return 0;
}
void primo (int x)
{
    int c=1,a,b=0;
    for(int i=0;i<x;i++)
    {
        a=x%c;
        c=c+1;
        if(a==0)
            b=b+1;

    }
    if(b==2)
        printf("true");
    else
        printf("false");
}
