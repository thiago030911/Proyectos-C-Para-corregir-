#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,b,k,l;
    char po[30];
    printf("ingrese un numero ");
    scanf("%d",&a);
    printf("ingrese otro numero ");
    scanf("%d",&b);
    k=a%2;
    l=b%2;
    do{
    printf("ingrese una opcion ");
    scanf("%s",&po[30]);

    }while(po[30]!='i'&&po[30]!='I'&&po[30]!='P'&&po[30]!='p');
    switch(po[30]){
    case 'i':
        if(k!=0&&l!=0)
        printf("%d y %d son impar",a,b);
        else
        {
            if(k!=0)
                printf("%d es impar",a);
            else
            {
                if(l!=0)
                 printf("%d es impar",b);
            }
        }


        break;
    case 'I':
           if(k!=0&&l!=0)
        printf("%d y %d son impar",a,b);
        else
        {
            if(k!=0)
                printf("%d es impar",a);
            else
            {
                if(l!=0)
                 printf("%d es impar",b);
            }
        }

        break;
    case 'P':
           if(k==0&&l==0)
        printf("%d y %d son impar",a,b);
        else
        {
            if(k=0)
                printf("%d es impar",a);
            else
            {
                if(l=0)
                 printf("%d es impar",b);
            }
        }

        break;
    case 'p':
           if(k==0&&l==0)
        printf("%d y %d son impar",a,b);
        else
        {
            if(k=0)
                printf("%d es impar",a);
            else
            {
                if(l=0)
                 printf("%d es impar",b);
            }
        }

        break;

    }

    return 0;
}
