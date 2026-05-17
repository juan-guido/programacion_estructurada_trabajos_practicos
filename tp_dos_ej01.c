#include <stdio.h>

/*
Ingresar dos valores, indicar e imprimir si son iguales.
*/


int main(void){

    int primer_numero_ingresado;
    int segundo_numero_ingresado;

    printf("Ingrese el primer número para ser comparado: \n>>> ");
    scanf("%d", &primer_numero_ingresado);

    printf("Ingrese el segundo número para ser comparado: \n>>> ");
    scanf("%d", &segundo_numero_ingresado);

    if (primer_numero_ingresado==segundo_numero_ingresado){
        printf("Los numeros %d y %d son iguales.", primer_numero_ingresado, segundo_numero_ingresado);
    }

    return 0;
}