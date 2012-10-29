//Carga basica de vectores
//edaian@palermo.edu
#include <stdio.h>
#include <stdlib.h>
#define DIMENSION 40

void cargarVector(int[], int);
void mostrarVector(int[], int n);

int main()
{
    int vec[DIMENSION], n;
    printf("Ingrese dimension del vector: \n");
    scanf("%d", &n);
    cargarVector(vec, n);
    mostrarVector(vec, n);
    return 0;
}

void cargarVector(int vec[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Ingrese valor: \n");
        scanf("%d", &vec[i]);
    }

    return;
}

void mostrarVector(int vec[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("vec[%d]: %d\n", i, vec[i]);
    }
}
