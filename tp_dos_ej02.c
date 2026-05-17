#include <stdio.h>

/*
Ingresar un valor indicar e imprimir si es positivo, negativo o cero
*/

int main(void){

    int numero_ingresado;
    numero_ingresado = 0;

    printf("Ingrese un numero para determinar si es positivo, negativo o cero: \n");
    scanf("%d", &numero_ingresado);

    if (numero_ingresado > 0) {

        printf("El numero %d es positivo.", numero_ingresado);
    }
    else if (numero_ingresado < 0) {

        printf("El numero %d es negativo.", numero_ingresado);
    }
    else {

        printf("El numero %d es efectivamente cero.", numero_ingresado);
    }
    return 0;
}