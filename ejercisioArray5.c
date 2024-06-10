#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a,b;
    int mat[a][b];
    printf("ingrese el numero de filas ");
    scanf("%d",&a);
    printf("ingrese la cantidad de columnas ");
    scanf("%d",&b);
    for(int i=0;i<a;i++)
    {
        for (int j =0;j<b;j++)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0;i<a;i++)
    {
        for (int j =0;j<b;j++)
        {
            printf("%d\n",mat[i][j]);
        }
    }



return 0;

}
