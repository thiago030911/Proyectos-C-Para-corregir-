#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define p printf
#define s scanf

typedef struct{
int cod;
char *nom;
char *ape;
int cat;
int deu;
char *est;
}datos1;

datos1 *par;

void activos (FILE *a,char auux,char ch [],int i);
void saldoacobrar ();
void vaciar1 (char ch[]);
void guardar(char ch[],int i,int cas);

int main(){

FILE *archi;
char ch[50],aux1,vari;
int cont = 0,i,j,caso = 1,ct=0;

if((archi = fopen("Deudas.txt","r+")) == NULL)
    p("el archivo se pudo abrir");

while(!feof(archi)){
    vari = fgetc(archi);
    if(cont == 6){
        break;
    }
    cont++;
}
cont = 0;
rewind(archi);

while(!feof(archi)){
    fgets(ch,50,archi);
//    p("%s",ch);
    cont ++;
}
vaciar1(ch);

rewind(archi);
par = (datos1*)malloc(cont*sizeof(datos1));
fseek(archi,42,SEEK_SET);

for( i = 0;!feof(archi);i++){
     vaciar1(ch);
        aux1='\0';

        for(j=0;aux1!='|'&&aux1!='\n'&&aux1!='.';j++){
            aux1=fgetc(archi);
            if(aux1!=vari&&aux1!='\n'&&aux1 != '.'){
                ch[j]=aux1;
        }
        if(aux1 == '.'){
                break;

        }
        }
//         p("%s",ch);
//        system("pause");
if(caso == 7){
    caso = 1;
p("Nombre: %c\n",par[1].nom);
system("pause");
}
if(caso==1){
    ct++;
}
guardar(ch,ct,caso);
caso++;

        if(aux1 == '.'){
               break;

        }
}

for(i=1;i<11;i++){
//p("Codigo: %d\n",par[i].cod);
//p("Nombre: %s\n",par[i].nom);
//p("Apellido: %s\n",par[i].ape);
//p("Categoria: %d\n",par[i].cat);
//p("Estado: %s\n",par[i].est);
//p("Deuda: %d\n",par[i].deu);
//system("pause");
}

p("Listo");




fclose(archi);

return 0;
}


void vaciar1 (char ch[]){
    for(int i=0;i<50;i++){
        ch[i]='\0';
    }
}


void guardar(char ch[],int i,int cas){
int cont = strlen(ch) + 1;
par[i].est = (char*)malloc(cont*sizeof(char));
par[i].nom = (char*)malloc(cont*sizeof(char));
par[i].ape = (char*)malloc(cont*sizeof(char));
switch(cas){
case 1:
    par[i].cod = atoi(ch);
    break;
case 2:
    strcpy(par[i].nom,ch);
    break;
case 3:
    strcpy(par[i].ape,ch);
    break;
case 4:
    par[i].cat = atoi(ch);
    break;
case 5:
    strcpy(par[i].est,ch);
    break;
case 6:
    par[i].deu = atoi(ch);
    //cas = 1;
    break;

}

}
