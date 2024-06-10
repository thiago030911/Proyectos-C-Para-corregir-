#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void pochi (int );
int main()
{
    int a;
    a=rand();
    printf("el numero aleatorio es :%d",a);
pochi(a);


    return 0;
}
void pochi (int x)
{
    int b,c,d,e,f,g;
     if(x<10000)
    {
        b=x%10;
        c=b*10000;
        d=c/10000;
        printf("la suma es:%d",d);

    }
    else
    {
        if(x>99999)
        {
            b=x%10;
            c=b*10000;
            d=c/10000;
            printf("la suma es:%d",d);
        }
    }
}
