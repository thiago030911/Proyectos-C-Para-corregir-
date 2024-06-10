#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
#define p printf
#define s scanf
#define f fprintf

void tecla(void );
void resultados (FILE *,int []);
void carga (FILE *);

typedef struct{
char id[20]={'\0'};

int dni = 0;

int asi;

char e[10];
}datos;

int main()
{
    FILE *archivo;
    int est[20]={0};

    if((archivo=fopen("texto2.txt","w+"))==NULL)
       p("no se pudo abrir el archivo");
    carga(archivo);
    tecla();
    rewind(archivo);
    resultados(archivo,est);
     tecla();


    fclose(archivo);
    return 0;

}

void carga (FILE *ar)
{
    datos a;
    //f(ar,"\t\t\t Centro de atencion al cliente \n\n\n");
    strcpy(a.e,"Libre");
    for(int i=0;i<18;i++)
    {
        a.asi=i+1;
        if(strcmp(a.e,"Libre")){
        f(ar,"Asiento. %d \t Estado: %s\n ",a.asi,a.e);
        }else{
        f(ar,"Asiento. %d \t Estado: %s \n ID: %s \n DNI: %d \n ",a.asi,a.e,a.id,a.dni);
        }
    }
    p("\ncarga completado...");
}

void resultados (FILE *ar,int b[])
{
    datos a;
    int as=0,var,h,cont=0;
    char ch,ap[50],ca;
//    p("ingrese el asiento que quiere reservar:");
//    s("%d",&as);
while(!feof(ar)){
    fgets(ap,50,ar);
    cont++;
}

rewind(ar);
while((ch=fgetc(ar))!=EOF){
    if(ch=='.'){
        p("hola");
        getch();
        if(as<3){
        //while((ca=getchar())=' '){
        fseek(ar,1,SEEK_CUR);
        while((ca=getchar())!='\n'){
        putc(ca,ar);

        }
       // break;
        }

//        fgets(ap,3,ar);
//        p("%s",ap);
        }

    }
    //system("pause");
}
//            while((ap=getchar())!=' '){
//                putc(ap,ar);





void tecla(void)
{
    p("**********************************************************************\n");
    system("pause");
    system("cls");
}
