//2) Ingresar dos numeros y calcular su division de forma recursiva
//20/4: 20-4-4-4-4... hasta llegar a 0 y
//la cantidad de veces es el resto de la division
#include <stdio.h>
#include <stdlib.h>

float calcularDivision(int, int);

int main()
{
    int num1, num2;
    float result;

    printf("Ingresar num1: \n");
    scanf("%d", &num1);

    printf("Ingresar num2: \n");
    scanf("%d", &num2);

    result = calcularDivision(num1, num2);
    printf("%d / %d = %.2f", num1, num2, result);
    return 0;
}

float calcularDivision(int num1, int num2)
{
    if(num1 == 0)
        return 0;

    return 1 + calcularDivision(num1-num2, num2);
}
