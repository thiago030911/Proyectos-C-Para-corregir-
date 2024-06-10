#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int o;
    int g;
    printf("1-corta distancia");
    printf("2-larga distancia");
    printf("ingrese el tipo de viaje");
    scanf("%d",&a);
    printf("ingrese la cantidad de kilos");
    scanf("%d",&b);
    switch(a)
    {
    case 1:
        if(b>20)
        {
            o=b-20;
            d=1500+(o*800);
             printf("el costo del viaje es =%d",d);
        }
            else
            {
                d=1500;
                printf("el costo del viaje es =%d",d);
            }
            break;



    case 2:
        if(b>20)
        {
            o=b-20;
            g=o/5;
            d=2000+(g*800);
            printf("el costo del viaje es =%d",d);
        }
            else
            {
                d=2000;
                printf("el costo del viaje es =%d",d);
            }
            break;


    }

    return 0;
}
