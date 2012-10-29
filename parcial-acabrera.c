/*
Ejercicio 1

3 1 4 1 5 9 2 6 5 -> salto 4
3 1 2 1 5 9 4 6 5 
3 1 2 1 5 9 4 6 5 -> salto 3
1 1 2 3 5 9 4 6 5
1 1 2 3 5 5 4 6 9 -> salto 2
1 1 2 3 4 5 5 6 9
*/

//Ejercicio 5

int main()
{
    int vector[] = { 7, 8, 14, 22, 24, 31, 34, 51, 87 };

    int valorABuscar = 7;
    if(busquedaTernaria(vector, 0, TAMANIO_VECTOR-1, valorABuscar) == 1) {
        printf("El valor %d fue encontrado", valorABuscar);
    } else {
        printf("El valor %d NO fue encontrado", valorABuscar);
    }

    return 0;
}


int busquedaTernaria (int vector[], int inicio, int fin, int valor)
{
    int tercio = (inicio+fin) / 3;

    if (inicio > fin)
        return 0;

    if (vector[tercio] == valor)
        return 1;

    else if (valor > vector[tercio*2]) //el valor esta en el 3er tercio
        return (busquedaTernaria(vector, (tercio*2)+1, fin, valor));
    else if (valor < vector[tercio]) //el valor esta en el primer tercio
        return (busquedaTernaria(vector, inicio, tercio-1, valor));
    else //el valor esta en el medio
        return (busquedaTernaria(vector, tercio, (tercio*2)-1, valor));

}


//Ejercicio 6
#include <stdio.h>
#include <stdlib.h>
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


