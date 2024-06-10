#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char nom[30];
    int dd,aaaa,mm;
    printf("ingrese el nombre  ");
    scanf("%s",&nom[30]);
    printf("ingrese el dia ");
    scanf("%d",&dd);
    printf("ingrese el mes ");
    scanf("%d",&mm);
    printf("ingrese el año ");
    scanf("%d",&aaaa);
    switch(mm)
    {
case 1:
    printf("%s nacio el %d de enero de %d",nom[30],dd,aaaa);
    break;
case 2:
    printf("%s nacio el %d de febrero de %d",nom[30],dd,aaaa);
    break;
case 3:
    printf("%s nacio el %d de marzo de %d",nom[30],dd,aaaa);
    break;
    }



    return 0;
}
