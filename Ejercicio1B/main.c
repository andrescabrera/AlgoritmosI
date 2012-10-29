#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int vec[], int n);
int fibo(int vec[], int n);

int main()
{
    int vec[1000];
    int numero, i;

    for(i = 0; i < 1000; i++)
        vec[i] = 1;

    printf("Ingrese un numero: ");
    scanf("%d",&numero);

    printf("\nfibo de %d: %d. \n", numero, fibo(vec, numero));

    mostrarVector(vec, numero);

    return 0;
}

int fibo(int vec[], int n) {

    if(vec[n-1] > 1)
        return vec[n-1];

    if(n<=2)
        return 1;

    vec[n-1] = fibo(vec, n-1)+fibo(vec, n-2);

    return vec[n-1];
}

void mostrarVector(int vec[], int n) {
    int i;
    for(i = 0; i<n; i++) {
        printf(" %d ", vec[i]);
    }
}
