#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int vec[5],p=0;
    int i,a;
    for(i=0;i<5;i++)
    {
        printf("ingrese un numero \n");
        scanf("%d",&vec[i]);
        p=p+vec[i];
    }
    a=p/5;
    printf("el promedio es %d\n",a);
    for(i=0;i<5;i++)
    {
        if(vec[i]>a)
        {
            printf("el valor %d supero el promedio\n",vec[i]);
        }
    }

    return 0;
}
