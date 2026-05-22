#include <stdio.h>

/*
Ingresar una cantidad determinada de valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros.
*/

int main (void) {

    unsigned int cantidad_valores;
    unsigned int cantidad_positivos = 0;
    unsigned int cantidad_negativos = 0;
    unsigned int cantidad_ceros = 0;
    unsigned int contador = 0;
    int valor_ingresado;
    float prom_positivos;
    float prom_negativos;
    float prom_ceros; 

    printf("Cuantos valores quiere ingresar? \n>>> ");
    scanf("%u", &cantidad_valores);


    for (contador; contador < cantidad_valores; contador++) {

        printf("Ingrese un valor entero cualquiera: \n>>> ");
        scanf("%i", &valor_ingresado);

        if (valor_ingresado > 0) {

            cantidad_positivos++;
        }
        else if (valor_ingresado < 0) {

            cantidad_negativos++;
        }
        else {

            cantidad_ceros++;
        }
    }
 
    prom_positivos = (float)cantidad_positivos / (float)contador * 100;
    prom_negativos = (float)cantidad_negativos / (float)contador * 100;
    prom_ceros = (float)cantidad_ceros / (float)contador * 100;

    printf("El promedio de numeros positivos es de %% %.2f, de numeros negativos es de %% %.2f y de ceros es de %% %.2f.", prom_positivos, prom_negativos, prom_ceros);
    return 0;
}