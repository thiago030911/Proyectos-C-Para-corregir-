#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i=0;
    int a[10];
    int max=0;
    int h=0;
    while(a[i]>0){

        printf("ingrese un numero ");
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        i=i++;
    };


    for(int b=0;b<i;b++)
    {
    printf("%d",a[b]);


    }
    //printf("el valor maximo es %d\n",max);
    //printf("las veces que se repite son %d\n",h);


    return 0;
}
