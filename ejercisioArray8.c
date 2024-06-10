#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n = 4;
int datos[] = {19, 35,34, 18};
int i, j;
int indiceMenor, aux;
for (int i = 0; i < n - 1; i++)
{
indiceMenor = i;
for (int j = i + 1; j < n; j++)
{
if (datos[j] < datos[indiceMenor])
indiceMenor = j;
}
if (i != indiceMenor)
{
aux = datos[i];
datos[i] = datos[indiceMenor];
datos[indiceMenor] = aux;
}
}


    return 0;
}
