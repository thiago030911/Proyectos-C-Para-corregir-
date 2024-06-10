#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void uno (FILE*texto);
int main()
{
    FILE *f;
    f=fopen("login.txt","rt");
    if(f==NULL)
        exit(1);


    uno(f);
    fclose(f);


    return 0;
}
void uno (FILE*texto)
{
    int a=0,b=0;;
    char cadena1;

    while(!feof(texto))
    {
        if(b==0)
        {
            if(fgetc!=" ")
            {
                a=a+1;
            }
            else
                b=b+1;
        }


    }
    cadena1=fseek(texto,a,SEEK_SET);
   fread(&cadena1,a,1,texto);
   printf("%c",&cadena1);



}
