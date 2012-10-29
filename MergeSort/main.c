//MergeSort

#include <stdio.h>
#include <stdlib.h>
#define TAMMAX 256

void cargar(int vec[], int tam);
void mostrar(int vec[], int tam);
void ordenarMerge(int vec[], int prin, int tam);
void merge(int vec[], int p, int m1, int m2, int q);

int main()
{
    int vec[TAMMAX];
    int tamanio;
    printf("Ingrese tamanio del vector: \n");
    scanf("%d", &tamanio);
    cargar(vec, tamanio);
    mostrar(vec, tamanio);
    ordenarMerge(vec, 0, tamanio);
    mostrar(vec, tamanio);
    return 0;
}

void cargar(int vec[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf("vec[%d]: \n", i);
        scanf("%d",&vec[i]);
    }
}

void mostrar(int vec[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
        printf("%d | ", vec[i]);
    printf("\n");
}

//void ordenarMerge(int vec[], int prin, int tam)
//{
//    if(tam-prin > 2)
//    {
//        printf("prin: %d, tam: %d\n", prin, tam);
//        system("pause");
//
//        int i;
//        for(i = prin; i < tam; i++)
//            printf("%d | ", vec[i]);
//        printf("\n");
//
////        ordenarMerge(vec, prin, tam/2);
//        ordenarMerge(vec, tam/2, tam-prin);
//    }
////    int aux;
////    if(tam == 2) {
////
////    }
//
//}




void ordenarMerge(int vec[], int p, int q) {
    int medio;
    if(p < q) {
        medio = (p+q)/2;
        ordenarMerge(vec, p, medio);
        ordenarMerge(vec, medio+1, q);
        merge(vec, p, medio, medio+1, q);
    }
}

void merge(int vec[], int p, int m1, int m2, int q) {
    int i, j, aux;

    for(i = p; i < m1; i++) {
        for(j = m2; j < q; j++) {
            aux = vec[i];
            if(vec[i] > vec[j])
            {
                printf("cambio %d por %d\n", vec[i], vec[j]);
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }

    }
}













