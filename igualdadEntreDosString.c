#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
char c[] = "hola";
char a[] = "hola";
char b[] = "hola1";

if (!strcmp(c,a) && strcmp(c,b)){
    printf("hola son iguales");
}else{
printf("hola no son iguales");
}



    return 0;
}
