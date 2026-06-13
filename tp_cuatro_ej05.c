#include <stdio.h>

/*
Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor
*/

int main (void) {

    float temp_ingresada_celsius;
    float temp_mayor_celsius = -273.16;
    float temp_menor_celsius = 1000.00;
    char hubo_ingreso = 1;
    char cant_temp_ingresadas = 0;
        
    printf("Ingrese una temperatura en celsius para ser comparada con las proximas.\nIngrese 1000 para terminar: \n>>> ");
    scanf("%f", &temp_ingresada_celsius);

    while (temp_ingresada_celsius != 1000.0) {

        cant_temp_ingresadas++;

        if (temp_ingresada_celsius >= temp_mayor_celsius) {

            temp_mayor_celsius = temp_ingresada_celsius;
        
        }

        if (temp_ingresada_celsius <= temp_menor_celsius) {

            temp_menor_celsius = temp_ingresada_celsius;
        } 

        

        if (temp_ingresada_celsius == 1000.0 && (int)cant_temp_ingresadas == 1) {
            printf("Paso por aca");
            hubo_ingreso = 0;
        }

        printf("Ingrese una temperatura en celsius para ser comparada con las proximas.\nIngrese 1000 para terminar: \n>>> ");
        scanf("%f", &temp_ingresada_celsius);
    }
    
    printf("%d/n", (temp_ingresada_celsius == 1000.0) );
    printf("%d/n", (cant_temp_ingresadas == '1'));
    printf("%c", cant_temp_ingresadas);

    if ((int)hubo_ingreso == 0) {
        
        printf("No se han ingresado temperaturas para ser comparadas.");
    } else {
        printf("%d/n", ((int)hubo_ingreso == 1));
        printf("La temperatura maxima fue de %.1f °C, y la minima fue de %.1f °C", temp_mayor_celsius, temp_menor_celsius);
    }
    
    return 0;
}