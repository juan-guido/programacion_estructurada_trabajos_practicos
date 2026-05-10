#include <stdio.h>

int main(void) {
    float numero_uno, numero_dos, producto_numeros_ingresados, suma_numeros_ingresados, resta_numeros_ingresados;

    printf("Ingrese el primer numero a ser operado: ");
    scanf("%f", &numero_uno );

    printf("Ingrese el segundo numero a ser operado: ");
    scanf("%f", &numero_dos);

    suma_numeros_ingresados = numero_uno + numero_dos;
    resta_numeros_ingresados = numero_uno - numero_dos;
    producto_numeros_ingresados = numero_uno * numero_dos;

    printf("Los resultados son los siguientes: \n - La suma es igual a %f. \n - La resta es igua a %f. \n - La multiplicacion es igual a %f.", suma_numeros_ingresados, resta_numeros_ingresados, producto_numeros_ingresados);


    return 0;
}