#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int vec[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("ingrese los elementos ");
        scanf("%d",&vec[i]);
    }
    printf("el cuarto elemento es el %d\n",vec[3]);
    printf("el segundo elemento es el %d\n",vec[1]);
    for(i=0;i<10;i++)
    {
        printf("los elementos de orden invertido son %d \n",vec[i]*-1);
    }
    printf("el producto entre el primero y el ultimo es %d",vec[0]*vec[9]);
    for(i=0;i<10;i++)
    {
        if(vec[i]%2==0)
        {
            printf("los elementos par son %d\n",vec[i]);
        }
        else
        {
            printf("los elemtos impar son %d\n",vec[i]);
        }
    }


    return 0;
}
