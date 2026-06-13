#include <stdio.h>

/*
Ingresar sueldos hasta que el usuario diga que no e indicar su suma y su promedio, imprimir resultados.
*/

int main (void) {

    char opcion_usuario;
    unsigned int contador_recibos_liquidados = 0;
    float sueldo_pesos; 
    float total_sueldos_pesos = 0; 
    float promedio_sueldos_pesos = 0;

    do {

        printf("Ingrese el sueldo del empleado: \n>>> $ ");
        scanf("%f", &sueldo_pesos);

        contador_recibos_liquidados++;
        total_sueldos_pesos += sueldo_pesos;
        
        printf("Desea ingresar otra liquidación? (S/N) \n>>> ");
        scanf(" %c", &opcion_usuario);
    }
    
    while (opcion_usuario == 'S' || opcion_usuario == 's');

    promedio_sueldos_pesos = total_sueldos_pesos / (float)contador_recibos_liquidados;
    
    printf("El total de sueldos liquidados es de $ %.2f, y el promedio liquidado es de $%.2f", total_sueldos_pesos, promedio_sueldos_pesos);
    return 0;
}