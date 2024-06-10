#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "time.h"
#include <ctype.h>
#include "math.h"
#define NUM_CAJAS 6
//void nroCaja(int, int, int);
//void nroSeccion(int,int);
float porcentajeDeVentas(int nroC, int importe, int recaudacionTotal){
    int recaTotal1=0,recaTotal2=0,recaTotal3=0,recaTotal4=0,recaTotal5=0,recaTotal6=0;
    //int recaudacionTotal=0;
    //recaudacionTotal+=importe;
switch(nroC){
case 1:
    return (importe/recaudacionTotal)*100;
    break;
case 2:
    //recaTotal2+=importe;
     return (importe/recaudacionTotal)*100;
    break;
case 3:
    //recaTotal3+=importe;
     return (importe/recaudacionTotal)*100;
    break;
case 4:
    recaTotal4+=importe;
     return (importe/recaudacionTotal)*100;
    break;
case 5:
    //recaTotal5+=importe;
     return (importe/recaudacionTotal)*100;
    break;
case 6:

     return (importe/recaudacionTotal)*100;
    break;
}
}




float porcentajeDeVentas2( int importe, int recaudacionTotal){
 return (importe/recaudacionTotal)*100;
}





void nomSeccionMayor(int nroS, int importe, char nombre[100]){
    int recaseccion1=0,recaseccion2=0,recaseccion3=0;
if(nroS==1){

 recaseccion1=recaseccion1+importe;
}else{if(nroS==2){
recaseccion2=recaseccion2+importe;

}else{if(nroS==3)
recaseccion3=recaseccion3+importe;
}
}
if(recaseccion1>recaseccion2 && recaseccion1>recaseccion3){
    strcpy(nombre,"Almacen");
    printf("%s", nombre);
}else{if(recaseccion2>recaseccion1 && recaseccion2>recaseccion3){
strcpy(nombre,"Verduleria_Y_Fruteria");
printf("%s", nombre);
}else{
strcpy(nombre,"Panaderia");
printf("%s", nombre);
}
}
}

int main(){
    //int recaudacionTotal=0;
    int cant_comprobantes1=0,cant_comprobantes2=0,cant_comprobantes3=0,cant_comprobantes4=0,cant_comprobantes5=0,cant_comprobantes6=0;
    int reca1=0,reca2=0,reca3=0,reca4=0,reca5=0,reca6=0;
    int total_ventas=0;
    int recaTotal1=0,recaTotal2=0,recaTotal3=0,recaTotal4=0,recaTotal5=0,recaTotal6=0;
    int maxventa=0,cajamax;
    char nombre[100];
    char l='s';
    int nroC,nroS,importe,produc;
    int cantDeComprobantes=0;

    while (l!='N' && l!='n'){
    do {
        printf(" ingrese el numero de caja (numero de caja es de 1 a 6)\n");
    scanf("%d", &nroC);
    }while(nroC<1 || nroC>6);
    do {
    printf("ingrese numero de seccion(1 al 3)\n");
    scanf("%d", &nroS);
    }while(nroS<1 || nroS>3);
    printf("ingrese el importe de la venta:\n");
    scanf("%d", &importe);
    printf("cuantos productos adquirio\n");
    scanf("%d", &produc);
    total_ventas+=importe;
    if(importe>1000 && produc<3){
        cantDeComprobantes++;
    }

    switch(nroC){
    case 1:
        cant_comprobantes1++;
        if(nroS==1){
            if(importe>500){
                reca1=reca1+importe*(10/100);
            }else{
            reca1=reca1+importe*produc;
            }
        }else{
        if(nroS==2){
            if(importe>500){
                reca1=reca1+importe*(10/100);
            }else{
            reca1=reca1+importe;
        }}
        else{
        if(importe>500){
                reca1=reca1+importe*(10/100);
            }else{
            reca1=reca1+importe;
        }
        }
        }
        recaTotal1=recaTotal1+reca1;
        break;
    case 2:
        cant_comprobantes2++;
        if(nroS==1){
            if(importe>500){
                reca2=reca2+importe*(10/100);
            }else{
            reca2=reca2+importe;
            }
        }else{
        if(nroS==2){
            if(importe>500){
                reca2=reca2+importe*(10/100);
            }else{
            reca2=reca2+importe;
        }}
        else{
        if(importe>500){
                reca2=reca2+importe*(10/100);
            }else{
            reca2=reca2+importe;
        }
        }
        }
        recaTotal2=recaTotal2+reca2;
        break;
    case 3:
        cant_comprobantes3++;
        if(nroS==1){
            if(importe>500){
                reca3=reca3+importe*(10/100);
            }else{
            reca3=reca3+importe;
            }
        }else{
        if(nroS==2){
            if(importe>500){
                reca3=reca3+importe*(10/100);
            }else{
            reca3=reca3+importe;
        }}
        else{
        if(importe>500){
                reca3=reca3+importe*(10/100);
            }else{
            reca3=reca3+importe;
        }
        }
        }
        recaTotal3=recaTotal3+reca3;
        break;
    case 4:
        cant_comprobantes4++;
        if(nroS==1){
            if(importe>500){
                reca4=reca4+importe*(10/100);
            }else{
            reca4=reca4+importe;
            }
        }else{
        if(nroS==2){
            if(importe>500){
                reca4=reca4+importe*(10/100);
            }else{
            reca4=reca4+importe;
        }
        }else{
        if(importe>500){
                reca4=reca4+importe*(10/100);
            }else{
            reca4=reca4+importe;
        }
        }
        }
        recaTotal4=recaTotal4+reca4;
        break;
    case 5:
        cant_comprobantes5++;
        if(nroS==1){
            if(importe>500){
                reca5=reca5+importe*(10/100);
            }else{
            reca5=reca5+importe;
            }
        }else{
        if(nroS==2){
            if(importe>500){
                reca5=reca5+importe*(10/100);
            }else{
            reca5=reca5+importe;
                }
        }else{
        if(importe>500){
                reca5=reca5+importe*(10/100);
            }else{
            reca5=reca5+importe;
        }
        }
        }
        recaTotal5=recaTotal5+reca5;
        break;
    case 6:
        cant_comprobantes6++;
        if(nroS==1){
            if(importe>500){
                reca6=reca6+importe*(10/100);
            }else{
            reca6=reca6+importe;
            }
        }else{
        if(nroS==2){
            if(importe>500){
                reca6=reca6+importe*(10/100);
            }else{
            reca5=reca5+importe;
        }}
        else{
        if(importe>500){
                reca6=reca6+importe*(10/100);
            }else{
            reca6=reca6+importe;
        }
        }
        }
        recaTotal6=recaTotal6+reca6;
        break;
    }
    if(importe>maxventa){
            maxventa=importe;
            cajamax=nroC;
    }

    do{

        printf("ingrese:\nS-si quiere continuar\nN-si quiere salir\n");
    scanf(" %c", &l);
    }while(l!='s' && l!='S' && l!='n' && l!='N');

    }

printf("cantidad de comprobantes en cada caja:\ncaja1: %d\ncaja2: %d\ncaja3: %d\ncaja4: %d\ncaja5: %d\ncaja6: %d", cant_comprobantes1,cant_comprobantes2,cant_comprobantes3,cant_comprobantes4,cant_comprobantes5,cant_comprobantes6);
printf("\nrecaudacioin de cada caja: \nrecaudacion1: %d\nrecaudacion2: %d\nrecaudacion3: %d\nrecaudacion4: %d\nrecaudacion5: %d\nrecaudacion6: %d\n",reca1,reca2,reca3,reca4,reca5,reca6);
printf("en la caja %d se registro la mayor venta de importe de %d\n", cajamax,maxventa);
printf("la seccion con mas recaudacion es: \n ");
nomSeccionMayor(nroS,importe,nombre);
printf("\nla cantidad de comprobantes con importes de venta mayor a 1000 y compro menos de 3 productos es: %d\n", cantDeComprobantes);
printf("El porcentaje de ventas de la caja 1 es: %2.0f\n", porcentajeDeVentas2(reca1,total_ventas));
printf("El porcentaje de ventas de la caja 2 es: %2.0f\n", porcentajeDeVentas2(reca2,total_ventas));
printf("El porcentaje de ventas de la caja 3 es: %2.0f\n", porcentajeDeVentas2(reca3,total_ventas));
printf("El porcentaje de ventas de la caja 4 es: %2.0f\n", porcentajeDeVentas2(reca4,total_ventas));
printf("El porcentaje de ventas de la caja 5 es: %2.0f\n", porcentajeDeVentas2(reca5,total_ventas));
printf("El porcentaje de ventas de la caja 6 es: %2.0f\n", porcentajeDeVentas2(reca6,total_ventas));
    return 0;
}
