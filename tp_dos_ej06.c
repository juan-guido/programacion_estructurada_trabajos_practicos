#include <stdio.h>

/*
Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad.
*/

int main (void){
    unsigned char edad_ingresada_a;
    unsigned char edad_ingresada_b;
    float estatura_persona_a_metros;
    float estatura_persona_b_metros;

    printf("Ingrese la edad de la persona A: \n>>> ");
    scanf("%hhu", &edad_ingresada_a);

    printf("Ingrese la altura de la persona A: \n>>> ");
    scanf("%f", &estatura_persona_a_metros);

    printf("Ingrese la edad de la persona B: \n>>> ");
    scanf("%hhu", &edad_ingresada_b);

    printf("Ingrese la altura de la persona B: \n>>> ");
    scanf("%f", &estatura_persona_b_metros);

    if (edad_ingresada_a > edad_ingresada_b) {

        printf("La persona A de %hhu años, mide %.2f metros.", edad_ingresada_a, estatura_persona_a_metros);
    } 
    else if (edad_ingresada_a < edad_ingresada_b) {
        
        printf("La persona B de %hhu años, mide %.2f metros.", edad_ingresada_b, estatura_persona_b_metros);
    } 
    else {

        printf("Ambas personas tienen la misma edad.");
    }

    return 0;
}