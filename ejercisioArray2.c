#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int sub[2][3]={{5,9,1},{8,2,7}};

    int a,b;
    printf("ingrese la fila del dato(0-2)");
    scanf("%d",&a);
    printf("ingrese una columna del dato(0-3)");
    scanf("%d",&b);
    printf("el dato a buscar es %d",sub[a][b]);


return 0;
}
