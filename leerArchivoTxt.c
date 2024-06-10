#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
 FILE *f;
 f=fopen( "prueba.txt", "rt");
 if (f == NULL){
printf("Error de apertura de archivo\n");
}
char caracter=fgetc(f);
while (!feof(f))
{
    printf("%c",caracter);
    caracter=fgetc(f);
}
fclose(f);


 return 0;
}
