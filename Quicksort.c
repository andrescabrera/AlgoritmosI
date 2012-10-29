void quicksort(int arreglo[ ], int inicio, int fin)
{
    intmedio;
    if (inicio < fin)
    {
        medio=inicio + menores(arreglo, inicio, fin, inicio);
        intercambio(arreglo, medio, inicio);
        particion(arreglo, inicio, fin, medio);
        quicksort(arreglo, inicio, medio-1);
        quicksort(arreglo, medio+1, fin);
    }
}

void Intercambio(intarreglo[], int posx, int posy)
{
    inttemporal;
    temporal = arreglo[posx];
    arreglo[posx] = arreglo[posy];
    arreglo[posy] = temporal;
}

Int menores(intarreglo[ ], int inicio, int fin, int valor)
{
    In tcontador = 0, x;
    for (x=inicio; x<=fin; x++)
        if (arreglo[valor] > arreglo[x])
            contador ++;
    return(contador);
}

void particion(int arreglo[ ], int inicio, int fin, int medio)
{
    intizquierda, derecha;
    izquierda=inicio;
    derecha=fin;
    while (izquierda < derecha)
    {
        while (arreglo[izquierda] < arreglo[medio])
            izquierda++;

        while (arreglo[derecha] > arreglo[medio])
            derecha--;
        if (izquierda < derecha)
            Intercambio(arreglo, izquierda, derecha);
    }
}

