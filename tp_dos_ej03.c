#include <stdio.h>

/*
Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es.
*/

int main(void){
    float lado_ingresado_a;
    float lado_ingresado_b;
    float lado_ingresado_c;

    printf("Ingrese el primer lado del triángulo: \n>>> ");
    scanf("%f" , &lado_ingresado_a);

    printf("Ingrese el segundo lado del triángulo: \n>>> ");
    scanf("%f" , &lado_ingresado_b);

    printf("Ingrese el tercer lado del triángulo: \n>>> ");
    scanf("%f" , &lado_ingresado_c);

    if (lado_ingresado_a == lado_ingresado_b && lado_ingresado_b == lado_ingresado_c) {
            printf("Se trata de un triangulo Equilátero.");
    }
    else if (lado_ingresado_a == lado_ingresado_b || lado_ingresado_b == lado_ingresado_c || lado_ingresado_a == lado_ingresado_c) {

        printf("Se trata de un triángulo Isósceles.");
    }
    else{

        printf("Se trata de un triángulo Escaleno.");
    }

    return 0;
}