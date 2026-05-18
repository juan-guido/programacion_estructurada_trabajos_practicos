#include <stdio.h>

/*
Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos valores es mayor al promedio.
*/

int main (void) {

    int primer_numero_ingresado;
    int segundo_numero_ingresado;
    int tercer_numero_ingresado;
    float promedio;
    int suma;
    int numero_mas_grande = 0;

    printf("Ingrese el primero de tres números: \n>>> ");
    scanf("%d", &primer_numero_ingresado);

    printf("Ingrese el segundo de tres números: \n>>> ");
    scanf("%d", &segundo_numero_ingresado);

    printf("Ingrese el tercero de tres números: \n>>> ");
    scanf("%d", &tercer_numero_ingresado);

    suma = primer_numero_ingresado + segundo_numero_ingresado + tercer_numero_ingresado;

    promedio = suma / 3.0;

    if (primer_numero_ingresado > promedio){

        printf("El numero %d es mayor al promedio.", primer_numero_ingresado);
    } 
    if (segundo_numero_ingresado > promedio) {

        printf("El numero %d es mayor al promedio.", segundo_numero_ingresado);
    }
    if (tercer_numero_ingresado > promedio){

        printf("El numero %d es mayor al promedio.", tercer_numero_ingresado);
    }

    return 0;
}