#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char a[3];
printf("ingrese una frase 3 caracteres");
scanf("%s",&a[3]);
for(int i=0;i<3;i++)
{
    printf("el valor %d es %s",i+1,a[i]);
}


return 0;
}

