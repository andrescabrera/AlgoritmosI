#include <stdio.h>
#include <stdlib.h>
#define TAMANIO_VECTOR 8

void mostrarVector(int [], int);
void cargarVector(int [], int);

void burbuja(int [], int);
void seleccion(int [], int);
void insercion(int [], int);
void shellSort(int [], int);
void mergeSort(int [], int, int);
void quickSort(int *, int, int);

int busquedaBinaria (int[], int, int, int);

int main()
{
    printf("Ordenamientos\n");

    int vector[] = { 5, 2, 3, 8, 6, 9, 1, 7};

    mostrarVector(vector, TAMANIO_VECTOR);

//    burbuja(vector, TAMANIO_VECTOR);
//    seleccion(vector, TAMANIO_VECTOR);
//    insercion(vector, TAMANIO_VECTOR);
//    shellSort(vector, TAMANIO_VECTOR);
//    mergeSort(vector, 0, TAMANIO_VECTOR);
    quickSort(vector, 0, TAMANIO_VECTOR-1);

    mostrarVector(vector, TAMANIO_VECTOR);

    return 0;
}

void cargarVector(int vec[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &vec[i]);
    }
}

void mostrarVector(int vec[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++)
        printf("%d | ", vec[i]);
    printf("\n");
}

void seleccion(int  vector[], int tamanio)
{
    int min, i, j, auxiliar, ban;

    for(i=0 ; i<tamanio-1 ; i++)
    {
        ban = 0;
        min = i; //min es el elemento primero de la sublista
        for(j=i+1; j<tamanio ; j++) //Esta es la sublista.
        {
            if (vector[min] > vector[j])
            {
                min = j; //min ahora apunta a el elemento menor de la sublista
                ban = 1; //seteamos ban a 1 para que efectue el intercambio dentro de la sublista
            }
        }
        if(ban)
        {
            auxiliar = vector[min];
            vector[min] = vector[i];
            vector[i] = auxiliar;
        }
    }
}

void shellSort(int vector[], int tamanio)
{
    // saltos
    int i, posicion, j;

    for(posicion = tamanio/2; posicion>0; posicion = posicion == 2 ? 1 : (int)(posicion/2.2))
    {
        for(i = posicion; i < tamanio; i++)
        {
            int tmp = vector[i];
            for(j = i; j >= posicion && tmp < vector[j - posicion]; j -= posicion)
            {
                vector[j] = vector[j-posicion];
            }
            vector[j] = tmp;
        }
    }
}

void mergeSort(int vector[], int inferior, int superior)
{
    int working[TAMANIO_VECTOR], i;
    if (inferior==superior)
        return;	//solo hay un elemento, así que finaliza

    int tamanio = superior-inferior+1;
    int pivot = (inferior+superior)/2;

    //divide
    mergeSort(vector, inferior, pivot);
    mergeSort(vector, pivot+1, superior);

    //combina
    for (i=0; i<tamanio; i++)
        working[i] = vector[inferior+i];

    int m1 = 0;
    int m2 = pivot-inferior+1;

    for(i=0; i<tamanio; i++)
    {
        if(m2 <= superior-inferior)
            if(m1 <= pivot-inferior)
                if(working[m1] > working[m2])
                    vector[i+inferior] = working[m2++];
                else
                    vector[i+inferior] = working[m1++];
            else
                vector[i+inferior] = working[m2++];
        else
            vector[i+inferior] = working[m1++];
    }
}

void insercion(int vector[], int tamanio)
{
    int i, j, indice;

    for (i=1; i < tamanio; i++)
    {
        indice = vector[i];

        for (j=i-1; j>=0 && vector[j]>indice; j--)
            vector[j + 1] = vector[j];

        vector[j+1] = indice;
    }
}

void burbuja(int vector[], int tamanio) // Menor A Mayor
{
    int i, j, auxiliar = 0;

    for(i = 1; i < tamanio; i++)
    {
        for(j=tamanio-1; j>=i ; j--)
        {
            if(vector[j] < vector[j-1])
            {
                auxiliar = vector[j];
                vector[j] = vector[j -1];
                vector[j-1] = auxiliar;
            }
        }
    }
}

int colocarQuickSort(int *vector, int base, int tamanio)
{
    int i;
    int pivote, valorPivote;
    int auxiliar;

    pivote = base;
    valorPivote = vector[pivote];

    for (i=base+1; i<=tamanio; i++)
    {
        if (vector[i] < valorPivote)
        {
            pivote++;
            auxiliar=vector[i];
            vector[i]=vector[pivote];
            vector[pivote]=auxiliar;
        }
    }

    auxiliar=vector[base];
    vector[base]=vector[pivote];
    vector[pivote]=auxiliar;
    return pivote;
}

void quickSort(int* vector, int base, int tamanio)
{
    int pivote;
    if(base < tamanio)
    {
        pivote=colocarQuickSort(vector, base, tamanio);
        quickSort(vector, base, pivote-1);
        quickSort(vector, pivote+1, tamanio);
    }
}

int busquedaBinaria (int vector[], int inicio, int fin, int valor)
{
    int medio = (inicio+fin) / 2;

    if (inicio > fin)
        return 0;

    if (vector[medio] == valor)
        return 1;

    else if (vector[medio] > valor)
        return (busquedaBinaria(vector, inicio, medio-1, valor));
    else
        return (busquedaBinaria(vector, medio+1, fin, valor));
}
