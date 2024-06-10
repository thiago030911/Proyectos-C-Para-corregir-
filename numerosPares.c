#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a;
    for(int i=0;i<51;i++)
    {
        a=i%2;
        if(a==0)
            printf("numero par =%d \n",i);

    }

    return 0;
}
