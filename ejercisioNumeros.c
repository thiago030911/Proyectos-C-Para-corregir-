#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a;
    int b;
    int c;
    printf("ingrese un numero");
    scanf("%d",&a);
    printf("ingrese un numero");
    scanf("%d",&b);
    printf("ingrese un numero");
    scanf("%d",&c);
    if(a==b)
        if(a==c)
        printf("son igualwes");
    else
        if(a<b)
        {
            if(a<c)
            printf("el menor es %d",a);
            else
            if(a<c)
            printf("el menor es %d",c);
        }
        else
        {
            if(b<c)
            printf("el valor menor es %d",b);
            else
                printf("el valor menor es %d",c);
        }




    return 0;
}
