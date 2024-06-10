#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
    int a;
    char b[30];
    int c;
    printf("ingrese el nombre del alumno");
    scanf("%s",&b);
    printf("ingrese la nota del alumno");
    scanf("%d",&a);
    if(a<=3)
        printf("reprobado");
        else
    {
        if(a<=5)
            printf("aprobado");
        else
        {
            if(a<=7)
                printf("bueno");
            else
            {
                if(a<=9)
                    printf("distinguido");
                    else
                    printf("sobresaliente");
            }
        }
    }



    return 0;
}
