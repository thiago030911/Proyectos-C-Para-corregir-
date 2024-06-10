#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int vec[5];
    for (int i=0;i<5;i++)
    {
        printf("ingrese un numero entero: ");
        scanf("%d",&vec[i]);
    }
    for(int j=0;j<5;j++)
    {
        printf("los numeros enteros son: %d\n",vec[j]);
    }

    return 0;
}
