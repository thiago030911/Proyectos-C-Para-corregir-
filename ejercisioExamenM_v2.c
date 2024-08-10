#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef char cadena[100];

typedef struct {
cadena nom1;
cadena ape1;
cadena cur1;
cadena nop;
cadena nonom;
int cal1;
int ina1;

}dat;

void vaciar(char ch[]);
void copnom(char ch[],int i,dat c[],int n);
void repetido(dat c[],int n);
void repetidonom(dat c[],int n);

int main(){


FILE *ar;
int cont=0,x=0,d=0,f;
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

cont = cont - 1;
dat datos[cont];

f = 5*cont;
f = f - 5;


rewind(ar);

fseek(ar,46,SEEK_SET);

  for(int i=0;i<f;i++){
    vaciar(ch);
    aux='\0';
    for(int j=0; aux != '-' && aux!='\n'; j++){
        aux = fgetc(ar);
        if(aux != '-' && aux!='\n'){
            ch[j] = aux;
        }
    }
    d ++;
    copnom(ch,x,datos,d);
    if(d==5){
        d = 0;
        x ++;
    }
  }

    printf("Nombres \t\tApellidos \t\tCursos \t\tCalificacion \t\tInasistencias\n");
  for(int i=0;i<cont;i++){
printf("%s \t\t\t%s \t\t\t%s \t\t\t%d \t\t\t%d \n",datos[i].nom1,datos[i].ape1,datos[i].cur1,datos[i].cal1,datos[i].ina1);
  }
  system("pause");

  repetido(datos,cont);
  repetidonom(datos,cont);


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
    break;
    }
}

void repetido(dat c[],int n){
    int a=0,g=0,h=0;
    strcpy(c[0].nop,c[0].cur1);

    for(int i=0;i<n;i++){

        if(strcmp(c[a].nop,c[i].cur1)){
        for(int m=0;m<=a;m++){
            if(strcmp(c[m].nop,c[i].cur1)){
            g++;
            }else{
                h=1;
            }
            if(strcmp(c[m].nop,c[i].cur1) && g>a){
                g=0;
                a++;
                strcpy(c[a].nop,c[i].cur1);
            }
        }
      }
      if(h==1){
        g=0;
        h=0;
      }
    }

    for(int p=0;p<a;p++){
        printf("%s son distintos\n",c[p].nop);
    }
    system("pause");
}

void repetidonom(dat c[],int n){
  int a=0,g=0,h=0;
    strcpy(c[0].nonom,c[0].nom1);

    for(int i=0;i<n;i++){

        if(strcmp(c[a].nonom,c[i].nom1)){
        for(int m=0;m<=a;m++){
            if(strcmp(c[m].nonom,c[i].nom1)){
            g++;
            }else{
                h=1;
            }
            if(strcmp(c[m].nonom,c[i].nom1) && g>a){
                g=0;
                a++;
                strcpy(c[a].nonom,c[i].nom1);
            }
        }
      }
       if(h==1){
        g=0;
        h=0;
      }
    }

    for(int p=0;p<a;p++){
        printf("%s son distintos\n",c[p].nonom);
    }
    system("pause");

}

