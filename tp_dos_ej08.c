#include <stdio.h>

/*
Ingresar tres valores correspondientes al día, mes__ingresado y año de una fecha, indicar si es válida, considerar los años bisiestos.
*/

int main (void) {

    unsigned char dia_ingresado;
    unsigned char mes__ingresado;
    int ano_ingresado;  

    printf("Ingrese un año: \n>>> ");
    scanf("%d", &ano_ingresado);

    printf("Ingrese un mes: \n>>> ");
    scanf("%hhu", &mes__ingresado);

    printf("Ingrese un día: \n>>> ");
    scanf("%hhu", &dia_ingresado);

    if (mes__ingresado == 1 || mes__ingresado == 3 || mes__ingresado == 5 || mes__ingresado == 7 || mes__ingresado == 8 || mes__ingresado == 10 || mes__ingresado == 12) {

        if (dia_ingresado <= 31 && dia_ingresado > 0) {

            printf("La fecha es valida.");
        }
        else {

            printf("La fecha es invalida.");
        }
    }
    else if (mes__ingresado == 4 || mes__ingresado == 6 || mes__ingresado == 9 || mes__ingresado == 11) {

        if (dia_ingresado <= 30 && dia_ingresado > 0) {

            printf("La fecha es valida.");
        }
        else {

            printf("La fecha es invalida.");
        }        
    }
    else if (mes__ingresado == 2) {

        if ( (ano_ingresado % 4 == 0 && ano_ingresado % 100 != 0) || ano_ingresado % 400 == 0 )  {

            if (dia_ingresado <= 29 && dia_ingresado > 0) {

                printf("La fecha es valida.");
            }
            else {

                printf("La fecha es invalida.");
            }
        }
        else {

            if (dia_ingresado <= 28 && dia_ingresado > 0) {

                printf("La fecha es valida.");
            }
            else {

                printf("La fecha es invalida.");
            }

        }
    }
    else {

        printf("La fecha es invalida.");
    }

    return 0;
}