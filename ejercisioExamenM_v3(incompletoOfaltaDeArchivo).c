#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct{
char chasis[10];
float cilindrada;
char tipo[10];

}Motor;

typedef struct{
int modelo;
char patente[6];
char detalle[20];
int KmsRecorridos;
Motor motor;
}Auto;

void vaciar(char ch[]);
void cargarDatos(char ch[],int n,int i,Auto datos[]);
void modeloAntiguo(Auto datos[],int x);
void listarAutos(Auto datos[],int x);
void mostrarAntiguo(int viejo,Auto datos[],int x);


int main(){

    FILE *ar;
    int cont=0,f,x=0,d=0;
    char ch[100];
    char aux;
    if((ar=fopen("modelos.txt","r+"))==NULL){
        printf("no se pudo abrir el archivo");
    }

    while(!feof(ar)){
        fgets(ch,100,ar);
        cont++;

    }

    rewind(ar);
    cont = cont - 2;
    Auto dat[cont];
    f = 7*cont;

    for (int i=0;i<f;i++){
        vaciar(ch);
        aux='\0';
        for(int j=0;aux!='	' && aux!='\n';j++){
            aux=fgetc(ar);
            if(aux!='	' && aux!='\n'){
                ch[j]=aux;
            }
        }
        d++;
        cargarDatos(ch,x,d,dat);
        if(d==7){
            d=0;
            x++;
        }

    }


    for(int m=0;m<x;m++){

    }

 modeloAntiguo(dat,x);
 system("pause");
 listarAutos(dat,x);





    return 0;
}

void vaciar(char ch[]){
for(int i=0;i<100;i++){
    ch[i]='\0';
}
}

void cargarDatos(char ch[],int n,int i,Auto datos[]){
    switch(i){
case 1:
    datos[n].modelo=atoi(ch);
    break;
case 2:
    strcpy(datos[n].patente,ch);
    break;
case 3:
    strcpy(datos[n].detalle,ch);
    break;
case 4:
    datos[n].KmsRecorridos=atoi(ch);
    break;
case 5:
    strcpy(datos[n].motor.chasis,ch);
    break;
case 6:
    datos[n].motor.cilindrada=atoi(ch);
    break;
case 7:
    strcpy(datos[n].motor.tipo,ch);
    break;
    }


}

void modeloAntiguo(Auto datos[],int x){
int i[x],viejo;
for (int j=0;j<x;j++){
    i[j] = datos[j].modelo % 10000;
}

for(int a=0;a<x;a++){
    for(int b=a+1;b<x;b++){
        if(i[a]<i[b]){
            viejo = i[a];
        }else{
        viejo = i[b];
        }
    }
}
mostrarAntiguo(viejo,datos,x);


}

void mostrarAntiguo(int viejo,Auto datos[],int x){
int aux;
printf("patente y detalle \t detalle \t\tkilometros \tchasis   \t\tcilindrada \t\ttipo \n");
for(int i=0;i<x;i++){
        aux = datos[i].modelo % 10000;
    if(viejo == aux){
    printf("%s \t %s \t\t%d \t\t%s \t\t%f \t\t%s \n",datos[i].patente,datos[i].detalle,datos[i].KmsRecorridos,datos[i].motor.chasis,datos[i].motor.cilindrada,datos[i].motor.tipo);
    }
}
}

void listarAutos(Auto datos[],int x){
    char a[10];
    int c;
    printf("Ingrese un tipo de auto: \n");
    scanf("%s",a);
    printf("Ingrese un kilometraje: \n");
    scanf("%d",c);

    printf("Patente \t Detalle \t Kilometraje \t Cilindrada \n");
    for (int i=0;i<x;i++){
        if(strcmp(a,datos[i].motor.tipo)){
        printf("hola");
        system("pause");
            if(c<datos[i].KmsRecorridos){
            printf("%s \t %s \t %d \t %f \n",datos[i].patente,datos[i].detalle,datos[i].KmsRecorridos,datos[i].motor.cilindrada);
            }
        }
    }

}


