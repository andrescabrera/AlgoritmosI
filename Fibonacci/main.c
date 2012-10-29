#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANTIDAD_MAXIMA 3048

void mostrarVector(int [], int);
int cantidadDivisores(int);
void obtenerPrimos(int [], int, int, int);

int main()
{
    int primos[CANTIDAD_MAXIMA], cantidadPrimos, j;

    for(j = 0; j < CANTIDAD_MAXIMA; j++)
        primos[j] = 0;

    printf("Ingrese cantidad primos: \n");
    scanf("%d", &cantidadPrimos);

    obtenerPrimos(primos, cantidadPrimos, 0, 0);
    mostrarVector(primos, cantidadPrimos);

    printf("Ingrese cantidad primos: \n");
    scanf("%d", &cantidadPrimos);

    obtenerPrimos(primos, cantidadPrimos, 0, 0);
    mostrarVector(primos, cantidadPrimos);

    return 0;
}

void obtenerPrimos(int primos[], int cantidadPrimos, int contadorPrimos, int numeroActual)
{
    if(primos[cantidadPrimos] != 0)
        return;

    if(contadorPrimos >= cantidadPrimos)
        return;

    //Paso numeros hasta el siguiente primo
    while(cantidadDivisores(numeroActual) != 2) numeroActual++;

    primos[contadorPrimos] = numeroActual;

    obtenerPrimos(primos, cantidadPrimos, contadorPrimos+1, numeroActual+1);
}

int cantidadDivisores(int numero)
{
    int i, contadorDivisores=1;

    for(i=1; i<numero; i++)
    {
        if(numero%i==0)
            contadorDivisores++;
    }

    return contadorDivisores;
}

void mostrarVector(int vec[], int tamanio)
{
    int i;

    for(i = 0; i < tamanio; i++)
        printf("%d | ", vec[i]);

    printf("\n");
}
