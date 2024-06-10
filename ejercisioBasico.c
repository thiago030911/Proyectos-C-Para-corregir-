
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int a;
int b;
int c;
printf("ingrese un valor1\n");
scanf("%d",&a);
printf("ingrese otro valor2\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("el valor1 %d\n",a);
printf("el valor2 %d\n",b);



return 0;

}


