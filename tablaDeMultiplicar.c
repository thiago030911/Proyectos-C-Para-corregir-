#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a;
    int g;
  do
  {
      printf("ingrese un numero");
      scanf("%d",&a);
  } while(a>10);
for(int i=0;i<=10;i++)
{
    g=a*i;
    printf("la multiplicacion entre %dx%d es: %d \n",a,i,g);
}
    return 0;
}
