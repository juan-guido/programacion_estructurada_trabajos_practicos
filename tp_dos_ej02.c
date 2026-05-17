#include <stdio.h>

/*
Ingresar un valor indicar e imprimir si es positivo, negativo o cero
*/

int main(){

    int numero_ingresado;
    numero_ingresado = 0;

    printf("Ingrese un numero para determinar si es positivo, negativo o cero: \n");
    scanf("%i", &numero_ingresado);

    if (numero_ingresado > 0) {

        printf("El numero %i es positivo.", numero_ingresado);
    }
    else if (numero_ingresado < 0) {

        printf("El numero %i es negativo.", numero_ingresado);
    }
    else {

        printf("El numero %i es efectivamente cero.", numero_ingresado);
    }
    return 0;
}