#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char nom [30];
    int a,b=0,c;
    char nom2[30];
    printf("ingrese el nombre del alumno");
    scanf("%s",&nom[30]);
    for(int i=0;i<3;i++)
    {
        printf("ingrese la nota %d",i+1);
        scanf("%d",&a);
        b=b+a;

    }
    printf("quieres procesar o no la informacion?");
    scanf("%s",&nom2[30]);
    switch(nom2[30])
    {
    case 's':c=b/3;
    if(c>=6)
        printf("el alumno %s esta aprobado con un %d",nom[30],c);
    else
        printf("esta desaprobado");
        break;
    case 'n':printf("no desea ingresar la informacion");
        break;
    }



    return 0;
}
