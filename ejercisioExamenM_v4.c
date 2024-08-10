#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct{
char *chasis1[10];
float cilindrada1;
char *tipo1[10];

}Motor1;

typedef struct{
int modelo1;
char *patente1[6];
char *detalle1[20];
int KmsRecorridos1;
Motor1 motor1;
}Auto1;

Auto1 *datos;


void cargarDatos(FILE *archi);
void vaciar(char ch[]);
void mostrarDatos(int cont);
void modeloAntiguo1(int cont);
void repetidonom1(int cont);

int main(){
FILE *archi;
char ch[50];
int cont=0;

if((archi=fopen("Notas3.txt","r+"))==NULL){
        printf("no se pudo abrir el archivo");
    }

    while(!feof(archi)){
        fgets(ch,50,archi);
        cont++;
    }
    rewind(archi);

datos = (Auto1*)malloc(cont*sizeof(Auto1));

vaciar(ch);
cargarDatos(archi);
mostrarDatos(cont);
system("cls");
modeloAntiguo1(cont);
system("cls");
repetidonom1(cont);

fclose(archi);
return 0;
}

void cargarDatos(FILE *archi){
    char ch1[50],carac;
    int control=0, lugar=1;

while(!feof(archi)){
    vaciar(ch1);
    carac='\0';
    for(int j=0;carac!=' ' && carac!='\n' && carac!=EOF;j++){
            carac=fgetc(archi);
            if(carac!=' ' && carac!='\n' && carac!=EOF){
                ch1[j]=carac;
            }
    }
    if(lugar==1)
        datos[control].modelo1 = atoi(ch1);

    if(lugar==2)
        strcpy(datos[control].patente1,ch1);

    if(lugar==4)
        datos[control].KmsRecorridos1 = atoi(ch1);

    if(lugar==3)
        strcpy(datos[control].detalle1,ch1);

    if(lugar==5)
        strcpy(datos[control].motor1.chasis1,ch1);

    if(lugar==6)
        datos[control].motor1.cilindrada1 = atof(ch1);

    if(lugar==7){
        strcpy(datos[control].motor1.tipo1,ch1);
        lugar=0;
        control++;
    }
    lugar++;
}

}

void vaciar(char ch[]){
for(int i=0;i<50;i++){
    ch[i]='\0';
}
}

void mostrarDatos(int cont){
    printf("Modelo \t Patente \t Detalle \t Kmsrecorridos \t Chasis \t Cilindrada \t Tipo \n");
for(int i=0;i<cont;i++){
    printf("%d \t %s \t %s \t %d \t %s \t %0.1f \t %s \n",datos[i].modelo1,datos[i].patente1,datos[i].detalle1,datos[i].KmsRecorridos1,datos[i].motor1.chasis1,datos[i].motor1.cilindrada1,datos[i].motor1.tipo1);

}
system("pause");
}

void modeloAntiguo1(int cont){
int var;
printf("Modelo \t Patente \t Detalle \t Kmsrecorridos \t Chasis \t Cilindrada \t Tipo \n");
for(int i=0;i<cont;i++){
var = datos[i].modelo1 % 10000;
if(var<=1990){
    printf("%d \t %s \t %s \t %d \t %s \t %0.1f \t %s \n",datos[i].modelo1,datos[i].patente1,datos[i].detalle1,datos[i].KmsRecorridos1,datos[i].motor1.chasis1,datos[i].motor1.cilindrada1,datos[i].motor1.tipo1);
}

}
}

void repetidonom1(int cont){
  int a=0,g=0,h=0;
  char nom[50];
    strcpy(nom,datos[0].detalle1);

    for(int i=0;i<cont;i++){
            vaciar(nom);

        if(strcmp(nom,datos[i].detalle1)){
        for(int m=0;m<=a;m++){
            if(strcmp(nom,datos[i].detalle1)){
            g++;
            }else{
                h=1;
            }
            if(strcmp(nom,datos[i].detalle1) && g>a){
                g=0;
                a++;
                strcpy(nom,datos[i].detalle1);
            }
        }
      }
       if(h==1){
        g=0;
        h=0;
      }
      printf("%s son distintos\n",nom);
    }
    system("pause");

}
