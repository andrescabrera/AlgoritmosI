#include <stdio.h>
#include <stdlib.h>

long calcularFactorial(int);

int main()
{
    long f;

    printf("Ingrese su numero: \n");
    scanf("%d", &num);

    f = factorial();

    printf("Factorial: %ld", f);

    return 0;
}

//Recursividad directa
long calcularFactorial(int numero)
{
    if(num == 1) || (num == 0)
        return 1;
    else
        return numero*factorial(numero-1);
}
