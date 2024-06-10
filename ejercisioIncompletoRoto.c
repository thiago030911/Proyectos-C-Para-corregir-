#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a;
    int b=0;
    printf("ingrese un numero ");
    scanf("%d",&a);
    for(int i=0;i<=a;a++)
    {
        b=a%i;
        if(b==0)
        {
            printf("el %d es divisor de %d",b,a);
        }
    }
    return 0;
}
