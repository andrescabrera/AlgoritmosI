//Ingresar dos numeros y calcular el producto de los mismos en forma recursiva
//2*3 = 2+2+2;
//3*3 = 3 + 3 + 3
#include <stdio.h>
#include <stdlib.h>

int calcularProducto(int, int);

int main()
{
    int num1, num2;
    printf("Ingresar num1: \n");
    scanf("%d", &num1);
    printf("Ingresar num2: \n");
    scanf("%d", &num2);
    printf("%d x %d = %d", num1, num2, calcularProducto(num1, num2));
    return 0;
}

int calcularProducto(int num1, int num2)
{
    if(num2 == 1)
        return num1;

    return (num1 + calcularProducto(num1, num2-1));
}
