#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void uno (int [11]);
void dos (int [11]);
void tres (int [11]);

int main()
{
    int vec[11]={4,50,45,80,38,92,29,46,37,10,0};
    uno(vec[11]);
    dos(vec[11]);
    tres(vec[11]);

    return 0;
}
void uno (int x[11])
{
    int na=0;
    int c;
    for (int i;i<10;i++)
    {
        na=na+x[i];
    }
    c=na/10;
    printf("el promedio es %d\n",c);
}
void dos (int x[11])
{
    int a;
    for (int i=0;i<10;i++)
    {
        if(x[i]<x[i+1])
            a=x[i+1];
        else
            a=x[i];
    }
    printf("el nro de auto que clasifico primero fue %d\n",a);

}
void tres (int x[11])
{
int a;
    for (int i=0;i<10;i++)
    {
        if(x[i]<x[i+1])
            a=x[i];
        else
            a=x[i+1];
    }
    printf("el nro de auto que clasifico ultimo fue %d\n",a);
}
