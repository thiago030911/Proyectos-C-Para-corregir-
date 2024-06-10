#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<time.h>
//#include<conio.h>
#include<ctype.h>
#define p printf
#define s scanf
typedef struct
{
    char *nom;
    char *ape;
    char *sig;
}datos;

datos *a;

void vaciar (char ch[]);
void copiarNom(char ch[],int i);
void copiarApe(char ch[],int i);
void copiarSig(char ch[],int i);
void duplicar (int acum);

int main()
{
    FILE *arch;
    //char *ar="texto4.txt";
    char aux,pal[]= "F\n",pal1[]= "F";
    char ch[50];
    int cont = 0;
    if((arch=fopen("texto4.txt","r"))==NULL){
        p("el archivo no se pudo abrir");
        exit(1);
    }
    fseek(arch,26,SEEK_SET);

    while(!feof(arch)){
        fgets(ch,50,arch);
        cont++;
    }

    rewind(arch);
    fseek(arch,26,SEEK_SET);
    a = (datos*)malloc(cont*sizeof(datos));

    if(a==NULL){
        p("no se ah podido guardar los archivos");
        exit(1);
    }

    for(int i = 0; !feof(arch) ; i++){
        vaciar(ch);
        aux = '0';
        for(int j=0; aux != ' '; j++){
            aux = fgetc(arch);
            if(aux != ' '){
                ch[j] = aux;
            }
        }

        copiarNom(ch,i);
        vaciar(ch);
        aux = '0';

        for(int q=0; aux != ' '; q++){
            aux = fgetc(arch);
            if(aux != ' '){
                ch[q] = aux;
            }
        }

        copiarApe(ch,i);
        fgets(ch,50,arch);
         copiarSig(ch,i);
        if(strcmp(ch,pal)&&strcmp(ch,pal1)){

        }else{
        p("Nombre: %s \n",a[i].nom);
        p("Apellido: %s \n",a[i].ape);
       p("Color: %s \n",a[i].sig);
        }
    }
    //duplicar (cont);
    system("pause");
return 0;
}

void duplicar (int acum)
{
int b[acum]={0},d;
char pal[]= "I\n",pal1[]= "I";

for(int i=0;i<acum;i++)
{
    d=i+1;
      if(strcmp(a[i].sig,pal) && strcmp(a[i].sig,pal1)){

        }else{

        for(int e=d;e<acum;e++){
        if(!strcmp(a[i].nom,a[e].nom)){
            b[e]=1;
        }
    }
}
}
for (int g=0;g<acum;g++){
    if(b[g]!=1){
        p("Nombre: %s \n",a[g].nom);
        p("Apellido: %s \n",a[g].ape);
        p("Color: %s \n",a[g].sig);
    }
}

}


void vaciar (char ch[]){
    for(int i = 0; i < 50 ; i++){
        ch[i] = '\0';
    }
}

void copiarNom(char ch[],int i){
    int cont = strlen(ch) + 1;//cuenta los caracteres que hay en ch
    a[i].nom = (char*)malloc(cont*sizeof(char));
    if(a[i].nom == NULL){
        p("no se ah podido cargar");
        exit(1);
    }
    strcpy(a[i].nom,ch);
}

void copiarApe(char ch[],int i){
    int cont = strlen(ch) + 1;//cuenta los caracteres que hay en ch
    a[i].ape = (char*)malloc(cont*sizeof(char));
    if(a[i].ape == NULL){
        p("no se ah podido cargar");
        exit(1);
    }
    strcpy(a[i].ape,ch);
}

void copiarSig(char ch[],int i){
    int cont = strlen(ch) + 1;//cuenta los caracteres que hay en ch
    a[i].sig = (char*)malloc(cont*sizeof(char));
    if(a[i].sig == NULL){
        p("no se ah podido cargar");
        exit(1);
    }
    strcpy(a[i].sig,ch);
}
