/*
Ingresar un numero y calcular el factorial

0!=1
1!=1
2!=1x2
3!=1x2x3

Ingresar un numero de cifras para generar el numero e
 e = 1+ 1/1! + 1/2! + 1/3! ...

*/
#include <stdio.h>
#include <stdlib.h>

int calcularFactorial(int);
float calcularE(int);

int main()
{
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    printf("El factorial de %d es %d\n", n, calcularFactorial(n));

    return 0;
}


int calcularFactorial(int numero)
{
    int i;
    int factorial = numero;

    for(i=1;i<numero;i++)
    {
        factorial = factorial*i;
    }

    return factorial;
}

float calcularE(int cantidadDecimales)
{
    float e = 1;
    int i;

    for(i = 1; i < cantidadDecimales; i++)
    {
        e += (i/calcularFactorial(i));
        i++;
    }
}


