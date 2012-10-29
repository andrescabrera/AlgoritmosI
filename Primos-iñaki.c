#include <stdio.h>

int calcularDivisores(int numero);
void mostrar(int vec[], int cant);
void obtenerPrimos(int vec[], int cant, int ult, int *pUlt, int pAct, int num);

int main(){
    int primos[9999] = {0}, cant, ultimo=0, *pUltimo=&ultimo;
    printf("\nIngrese la cantidad de primos a calcular: ");
    scanf("%d", &cant);
    obtenerPrimos(primos, cant, ultimo, pUltimo, 0, 0);
    printf("\n");
    mostrar(primos, cant);

    printf("\nIngrese la cantidad de primos a calcular: ");
    scanf("%d", &cant);
    obtenerPrimos(primos, cant, ultimo, pUltimo, ultimo+1, primos[ultimo]);
    printf("\n");
    mostrar(primos, cant);

    return 0;
}

void obtenerPrimos(int vec[], int cant, int ult, int *pUlt, int pAct, int num){
    //vector, cantidad, ultimo, *ultimo, posicionActual, numeroActual=0
    if(pAct==cant){             //veo si ya calcule el ultimo pedido
        *pUlt=pAct-1;
        return;
    }
    if(ult>=cant-1) return;     //veo si el ultimo calculado ya satisface
    do{
        num++;
    }while(calcularDivisores(num)>2);
    vec[pAct]=num;
    obtenerPrimos(vec, cant, pAct, pUlt, pAct+1, num);
    return;
}

int calcularDivisores(int numero){
    int q=0, i;
    for(i=numero; i>0; i--){
        if(numero%i==0) q++;
    }
    return q;
}

void mostrar(int vec[], int cant){
    int i;
    for(i=0; i<cant; i++){
        printf("%d\t", vec[i]);
    }
    return;
}
