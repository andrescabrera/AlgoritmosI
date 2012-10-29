//Ingresar un vector de n elementos y
//calcular la suma de sus elementos en forma recursiva

#include <stdio.h>
#include <stdlib.h>
#define TAM 256

void cargarVector(int[], int);
void mostrarVector(int vec[], int tam);
int calcularSuma(int vec[], int tam);

int main()
{
    int vec[TAM];
    int tam;
    int suma;

    printf("Ingrese tamaño del vector: \n");
    scanf("%d", &tam);

    cargarVector(vec, tam);
    mostrarVector(vec, tam);
    suma = calcularSuma(vec, tam-1);

    printf("Suma de los elementos del vector = %d", suma);

    return 0;
}

void cargarVector(int vec[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("Ingrese valor: \n");
        scanf("%d", &vec[i]);
    }
}

void mostrarVector(int vec[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
        printf("vec[%d] = %d", i, vec[i]);
}

int calcularSuma(int vec[], int tam)
{
    if(tam == 0)
        return vec[tam];

    return vec[tam] + calcularSuma(vec, tam-1);
}
