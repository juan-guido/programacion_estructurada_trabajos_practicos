#include <stdio.h>

/*
Ingresar el valor de la hora y el tiempo trabajado por un operario, calcular su sueldo e imprimirlo
*/

int main(void){
    unsigned char horas_trabajadas;
    unsigned int valor_hora;
    float sueldo;

    printf("Ingrese la cantidad de horas en el mes trabajadas: ");
    scanf("%hhu", &horas_trabajadas);

    printf("Ingrese el valor hora: ");
    scanf("%u", &valor_hora);

    sueldo = horas_trabajadas * valor_hora;

    printf("El sueldo de este mes es de $ %.2f", sueldo);

    return 0;
}