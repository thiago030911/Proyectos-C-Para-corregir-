#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    for(int a=0;a<10;a++)
    {
        printf("ingrese un numero");
        scanf("%d",&i);
        if(i>0)
            printf("es positivo");
    }
    return 0;
}
