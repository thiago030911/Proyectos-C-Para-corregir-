#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef char cadena[100];

typedef struct {
cadena nom1;
cadena ape1;
cadena cur1;
int cal1;
int ina1;

}dat;

void vaciar(char ch[]);
void copnom(char ch[],int i,dat c[],int n);
//void mov(char ch[],int i,datos c[],int n);

int main(){


FILE *ar;
int cont=0,x=0,d=1,f=0;
cadena ch;
char aux;

if((ar=fopen("Notas.txt","r+"))==NULL){
    printf("El archivo no se pudo abrir ");}

fseek(ar,46,SEEK_SET);

while(!feof(ar))
{
    fgets(ch,100,ar);
    cont++;
}

dat datos[cont];
printf("%d ",cont);
system("pause");
cont = cont - 1;






rewind(ar);

fseek(ar,46,SEEK_SET);

  for(int i=0;i<7;i++){
    vaciar(ch);
    aux='\0';
    for(int j=0; aux != '-' && aux!='\n'; j++){
        aux = fgetc(ar);
        if(aux != '-' && aux!='\n'){
            ch[j] = aux;
        }
    }
    printf("%s \n",ch);
    system("pause");
    strcpy(datos[i].nom1,ch);
    //***************************************************************
    vaciar(ch);
    aux='\0';
      for(int b=0; aux != '-' && aux!='\n'; b++){
        aux = fgetc(ar);
        if(aux != '-' && aux!='\n'){
            ch[b] = aux;
        }
    }
    strcpy(datos[i].ape1,ch);
    //*********************************************************************

    vaciar(ch);
    aux='\0';
      for(int n=0; aux != '-' && aux!='\n'; n++){
        aux = fgetc(ar);
        if(aux != '-' && aux!='\n'){
            ch[n] = aux;
        }
    }
    strcpy(datos[i].cur1,ch);
    //*************************************************************************

    vaciar(ch);
    aux='\0';
      for(int m=0; aux != '-' && aux!='\n'; m++){
        aux = fgetc(ar);
        if(aux != '-' && aux!='\n'){
            ch[m] = aux;
        }
    }
    datos[i].cal1 = atoi(ch);
    //*****************************************************************


    vaciar(ch);
    aux='\0';
    for(int c=0; aux != '-' && aux!='\n'; c++){
        aux = fgetc(ar);
        if(aux != '-' && aux!='\n'){
            ch[c] = aux;
        }
    }
    datos[i].ina1 = atoi(ch);
  }

  for(int i=0;i<7;i++){
    printf("%s \n",datos[i].nom1);
    printf("%s \n",datos[i].ape1);
    printf("%s \n",datos[i].cur1);
    printf("%d \n",datos[i].cal1);
    printf("%d \n",datos[i].ina1);
    system("pause");
  }


return 0;
}

void vaciar(char ch[]){
    for(int i=0;i<50;i++){
        ch[i]='\0';
    }
}

void copnom(char ch[],int i, dat c[],int n){
    switch(n){
case 1:
    strcpy(c[i].nom1,ch);
    break;
case 2:
    strcpy(c[i].ape1,ch);
    break;
case 3:
    strcpy(c[i].cur1,ch);
    break;
case 4:
    c[i].cal1 = atoi(ch);
    break;
case 5:
    c[i].ina1 = atoi(ch);
    n=1;
    i++;
    break;


    }
}
