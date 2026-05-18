/* Este codigo ha sido generado por el modulo psexport 20230904-l64 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include <stdio.h>
#define VALOR_HORA_CAT_1_PESOS 50
#define VALOR_HORA_CAT_2_PESOS 70
#define VALOR_HORA_CAT_3_PESOS 80

/*
Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80.
*/

int main(void) {

	unsigned char categoria_ingresada;
	unsigned char horas_trabajadas_ingresadas;
	float sueldo;
	
	printf("Ingrese las horas trabajadas por el trabajador: \n");
	scanf("%hhu", &horas_trabajadas_ingresadas);
	
	printf("Ingrese la categoria del trabajador (1, 2 o 3): \n");
	scanf("%hhu", &categoria_ingresada);
	
	switch (categoria_ingresada) {
	case 1:

		sueldo = horas_trabajadas_ingresadas * VALOR_HORA_CAT_1_PESOS;
		break;
	case 2:

		sueldo = horas_trabajadas_ingresadas * VALOR_HORA_CAT_2_PESOS;
		break;
	case 3:

		sueldo = horas_trabajadas_ingresadas * VALOR_HORA_CAT_3_PESOS;
	default:
		
		printf("Categoría ingresada invalida.");
	}

	printf("El sueldo por trabajar %hhu hora\\s, un trabajador de categoria %hhu es de $ %.2f. \n", horas_trabajadas_ingresadas, categoria_ingresada, sueldo);

	return 0;
}

