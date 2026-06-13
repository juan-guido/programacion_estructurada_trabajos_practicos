#include <stdio.h>

/*
Desarrolle un programa que almacene en un vector el número de días que tiene cada mes (supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.
*/

void mostrar_dias_mes (int mes, const unsigned char v_dias_meses[]);

const unsigned char v_dias_meses[]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main (void){
    int mes_ingresado;

    printf("Ingrese el numero de un més para saber su cantidad de días (0 para salír): \n>>>");
    scanf("%d", &mes_ingresado);

    while (mes_ingresado != 0){  
        mostrar_dias_mes(mes_ingresado, v_dias_meses);
        printf("Ingrese el numero de un més para saber su cantidad de días (0 para salír): \n>>>");
        scanf("%d", &mes_ingresado);        
    }
    
    return 0;
}

void mostrar_dias_mes ( int mes, const unsigned char v_dias_meses[]){
    unsigned char cantidad_dias;
    cantidad_dias = v_dias_meses[mes - 1];
    printf("El mes %u de un año no bisiesto tiene %hhu días.\n", mes, cantidad_dias);
}