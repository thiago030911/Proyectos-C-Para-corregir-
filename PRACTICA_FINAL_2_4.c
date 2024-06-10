#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define p printf
#define s scanf

typedef struct{
char *nom;
char *ape;
char *sec;
int pl;
}dat;

dat *st;

void vaciar(char ch[]);
void copnom(char ch[],int i);
void copape(char ch[],int i);
void copsec(char ch[],int i);
void variable(char vari, FILE *a);

int main()
{
    FILE *a;
    int cont=0,conta=0,contb=0,contc=0;
    int proa=0,prob=0,proc=0;
    char ch[50],aux,vari;
    char apro[]="A",apro1[]="B";

    if((a=fopen("texto4.txt","r+"))==NULL){
        p("El archivo no se pudo abrir ");}
    //fseek(a,33,SEEK_SET);
    //variable(vari,a);
    rewind(a);
    while(!feof(a))
    {
        fgets(ch,50,a);
        cont++;
    }

    rewind(a);
    st=(dat*)malloc(cont*sizeof(dat));
    //fseek(a,33,SEEK_SET);
    for(int i=0;!feof(a);i++){
        vaciar(ch);
        aux='\0';
        for(int j=0;aux!='-';j++){
            aux=fgetc(a);
            if(aux!='-'){
                ch[j]=aux;
            }
        }
        copnom(ch,i);
        //fseek(a,1,SEEK_CUR);
        //*************************************************************
        vaciar(ch);
        aux='\0';
        for(int q=0;aux!='-';q++){
            aux=fgetc(a);
            if(aux!='-'){
                ch[q]=aux;
            }
        }
        copape(ch,i);
        //fseek(a,1,SEEK_CUR);
        //******************************************************************
        vaciar(ch);
        aux='\0';
        for(int k=0;aux!='-';k++){
            aux=fgetc(a);
            if(aux!='-'){
                ch[k]=aux;
            }
        }
        copsec(ch,i);
        //fseek(a,1,SEEK_CUR);
        //****************************************************************************
        fgets(ch,50,a);
        st[i].pl = atoi(ch);
        //****************************************************************************
        if(!strcmp(st[i].sec,apro)){
        p("Nombre: %s\n",st[i].nom);
        p("Apellido: %s\n",st[i].ape);
        p("Seccion: %s\n",st[i].sec);
        p("Plata: %d\n",st[i].pl);
        conta++;
        proa=proa+st[i].pl;
        }else{if(!strcmp(st[i].sec,apro1)){
        contb++;
        prob=prob+st[i].pl;
        }else{
        contc++;
        proc=proc+st[i].pl;
        }

        }
//        p("Nombre: %s\n",st[i].nom);
//        p("Apellido: %s\n",st[i].ape);
//        p("Seccion: %s\n",st[i].sec);
//        p("Plata: %d\n",st[i].pl);
    }
    system("pause");
    system("cls");
    p("El porcentaje de A es:%d\n",proa/conta);
    p("El porcentaje de B es:%d\n",prob/contb);
    p("El porcentaje de C es:%d\n",proc/contc);

    fclose(a);

    return 0;
}

void vaciar(char ch[]){
    for(int i=0;i<50;i++){
        ch[i]='\0';
    }
}

void copnom(char ch[],int i){
int cont = strlen(ch) + 1;
st[i].nom = (char*)malloc(cont*sizeof(char));
strcpy(st[i].nom,ch);
}

void copape(char ch[],int i){
int cont = strlen(ch) + 1;
st[i].ape = (char*)malloc(cont*sizeof(char));
strcpy(st[i].ape,ch);
}

void copsec(char ch[],int i){
int cont = strlen(ch) + 1;
st[i].sec = (char*)malloc(cont*sizeof(char));
strcpy(st[i].sec,ch);
}

void variable(char vari, FILE *a){
char aux;
int cont=0;
 while((aux=getc(a))!=EOF){
        if(cont==4)
        {
            vari=aux;
        }
        cont++;
}
}
