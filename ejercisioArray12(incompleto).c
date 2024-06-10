#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reversa (int );
int main()
{
    int a;
    printf("ingrese un numero ");
    scanf("%d",&a);
    reversa(a);

return 0;

}
int reversa (int x)
{
    int p;
    if(x<10)
        p=x;
    else{
        p=1;
    }
    return p;



}
