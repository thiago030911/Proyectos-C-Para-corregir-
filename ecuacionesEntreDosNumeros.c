#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a;
int b;
int c;
int d;
int e;
float f;
printf("ingrese el valor1\n");
scanf("%d",&a);
printf("ingrese el valor2\n");
scanf("%d",&b);
c=a+b;
d=a-b;
e=a*b;

printf("el valor1 %d\n",c);
printf("el valor1 %d\n",d);
printf("el valor1 %d\n",e);
if(b=!0)
{
    f=a/b;
    printf("el valor1 %f\n",f);
}
else
    printf("el divisor es 0");

    return 0;
}
