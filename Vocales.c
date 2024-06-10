#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char voc[30];
    printf("ingrese un caracter");
    scanf("%s",&voc[30]);
    switch(voc[30])
    {
    case 'a':printf("es una vocal");
        break;
    case 'e':printf("es una vocal");
        break;
    case 'i':printf("es una vocal");
        break;
    case 'o':printf("es una vocal");
        break;
    case 'u':printf("es una vocal");
        break;
        default:printf("no es vocal");
    }


    return 0 ;
}
