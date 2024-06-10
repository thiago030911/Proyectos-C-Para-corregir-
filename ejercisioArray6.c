#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void pos (int [5]);
int main()
{
    int vec[5]={0,-1,0,6,-7};
    pos(vec[5]);


    return 0;
}
void pos (int x[5])
{
    int a=0,b=0,c=0;
    for(int i=0;i<5;i++)
    {
        if(x[i]==0)
            a=a+1;
        else
        {
            if(x[i]>0)
                b=b+1;
            else
                c=c+1;
        }

    }
    printf("la cantidad de elementos positivos son %d\n",b);
     printf("la cantidad de elementos negativos son %d\n",c);
      printf("la cantidad de ceros son %d\n",a);
}
