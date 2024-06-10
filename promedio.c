#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a=1;
    int b=0;
    int c=0,h;
    do
        {
        printf("ingrese un numero\n");
        scanf("%d",&a);
        if(a>0)
        {
        b=b+a;
        c=c+1;

        }

    }   while(a>=0);
    h=b/c;
    printf("el promedio es %d",h);

}

