#include <stdio.h>

/*
Una concesionaria de autos desea liquidar el sueldo a cada vendedor pagando $ 500 por mes más un plus del 10% del precio sobre cada vehículo vendido y un valor constante de 50 pesos por cada uno de ellos, se ingresa el valor del vehiculo y cuantos vehiculos dee ese tipo vendio, calcular su sueldo e imprimirlo.
*/

int main(void){
    const unsigned int REMUNERACIONFIJA = 500U, PLUSFIJO = 50U;
    unsigned int cantidadVehiculosVendidos;
    float sueldoTotal, valorVehiculosVendidos, remuneracionVariable;

    printf("Ingrese cantidad de vehiculos vendidos por el trabajador: ");
    scanf("%u", &cantidadVehiculosVendidos);

    printf("Ingrese el valor unitario del vehiculo vendido: ");
    scanf("%f", &valorVehiculosVendidos);

    remuneracionVariable = (cantidadVehiculosVendidos * valorVehiculosVendidos) * 0.10 + cantidadVehiculosVendidos * PLUSFIJO;

    sueldoTotal = remuneracionVariable + REMUNERACIONFIJA;

    printf("El sueldo del trabajador por vender %u es de $ %.2f.", cantidadVehiculosVendidos, sueldoTotal);

    return 0;
}