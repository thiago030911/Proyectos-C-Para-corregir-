/*Actividad 1:
leer nombres y sus edades y ordenarlos de mayor a menor
no motrar a los repetidos.
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define s scanf
#define p printf

void titulo (void);

int main()
{
    int n = 7;
    char aux1 = "\0";
    int edad[] = {18, 25, 17, 32, 29, 25, 32};
    int notas[] = {5, 10, 7, 6, 2, 10, 6};
    int aux2[] = {0,1, 2, 3, 4, 5, 6};
    char nombres[][20] = {"nom1","nom2","nom3","nom4","nom5","nom2","nom4"};
    int aux,i,j;

    p("\n\t\t\t LISTA DESORDENADA \t\t\n");
    titulo();

    for(i = 0;i<n;i++)
    {
    p("\t\t%s\t\t%d\t\t%d\n",nombres[i],edad[i],notas[i]);
    }

    for(i = 0;i<n;i++)
    {
        for(j = 0; j<n;j++)
        {
            if(edad[j]<edad[j+1])
            {
                aux = edad[j];
                edad[j] = edad[j+1];
                edad[j+1] = aux;
                //************************************************************************
                aux = notas[j];
                notas[j] = notas[j+1];
                notas[j+1] = aux;
                //************************************************************************
                aux = aux2[j];
                aux2[j] = aux2[j+1];
                aux2[j+1] = aux;
                //************************************************************************

            }
        }
    }

    system("pause");
    p("\n\t\t\t LISTA ORDENADA (con datos repetidos) \t\t\n");
    titulo();
    for(i=0;i<n;i++){
        p("\t\t%s\t\t%d\t\t%d\n",nombres[aux2[i]],edad[i],notas[i]);
    }

    system("pause");
    p("\n\t\t\t LISTA ORDENADA (con datos repetidos) \t\t\n");
    titulo();
    for(i=0;i<n;i++){
            for(j = 0; j<n;j++)
        {
            if(notas[j]==notas[j+1])
            {
                notas[j+1]=0;

            }
        }
        if(notas[i]!=0){
        p("\t\t%s\t\t%d\t\t%d\n",nombres[aux2[i]],edad[i],notas[i]);
        }
    }


    return 0;
}


void titulo(void)
{
    p("\n\t\tNombre\t\tEdad\t\tNota\n\n");
}

