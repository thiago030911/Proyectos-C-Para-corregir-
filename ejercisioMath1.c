#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int potencias (int ,int );
int main()
{
    int a,b;
    printf("ingrese la base del numero ");
    scanf("%d",&a);
    printf("ingrese el numero exponencial");
    scanf("%d",&b);
    potencias(a,b);
    printf("el numero elevado es %d",potencias(a,b));


    return 0;
}
int potencias (int x,int y)
{
    int p;
    if(y==1)
        p=x;
    else
        p=x*potencias(x,y-1);

        return p;

}
