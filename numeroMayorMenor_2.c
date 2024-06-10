#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void signo (int );
void mayor (int ,int );
void fectorial (int );
int main()
{
    int a,b;
    printf("ingrese un numero ");
    scanf("%d",&a);
    printf("ingrese otro numero");
    scanf("%d",&b);


    return 0;
}
void signo (int x)
{
    if(x>=0)
        printf("1");
    else
        printf("-1");
}
void mayor (int x,int y)
{
    if(x>y)
        printf("%d es mayor que %d",x,y);
    else
        printf("%d es mayor que %d",y,x);
}
void factorial (int x)
{
    int a=x,b=x;
    for(int i=0;i<x-1;i++)
    {
        b=b-1;
        a=a*b;

    }

}
