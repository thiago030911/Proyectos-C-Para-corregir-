#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,h;
    for(a=0;a<21;a++)
    {
        if(a<2)
        {
            h=a*2;
         printf("las potencias en %d son %d\n",a,h);
        }
        else
        {
            h=h*2;
        printf("las potencias en %d son %d\n",a,h);
        }
    }

    return 0;
}
