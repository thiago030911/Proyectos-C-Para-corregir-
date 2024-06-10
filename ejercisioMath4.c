#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fecha (int *,int *,int *);
int main()
{
    int a,b,c;
    printf("ingrese un dia ");
    scanf("%d",&a);
    printf("ingrese el mes ");
    scanf("%d",&b);
    printf("ingrese el año ");
    scanf("%d",&c);
    fecha(&a,&b,&c);
    printf("el dis siguinete es %d/%d/%d",a,b,c);



    return 0;
}
void fecha (int *x,int *y,int *z)
{
    *x=*x+1;
    if(*x>31)
    {
        *x=1;
        *y=*y+1;
        if(*y>12)
        {
            *y=1;
            *z=*z+1;
        }
    }


}
