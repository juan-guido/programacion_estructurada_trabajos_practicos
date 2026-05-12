#include <stdio.h>

int main(void) {
    int  numerouno, numerodos, sumaNumerosIngresados;
    
    printf("Ingrese el primer numero a ser sumado: ");

    scanf("%d", &numerouno);

    printf("Ingrese el segundo numero a ser sumado: ");

    scanf("%d", &numerodos);

    sumaNumerosIngresados = numerodos + numerouno;

    printf("La suma de %d mas %d es igual a %d.", numerouno, numerodos, sumaNumerosIngresados);

}