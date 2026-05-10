/* Este codigo ha sido generado por el modulo psexport 20230904-l64 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int categoria1;
	int categoria2;
	int categoria3;
	int categoriaingresada;
	int horastrabajadasingresadas;
	float sueldo;
	categoria1 = 50;
	categoria2 = 70;
	categoria3 = 80;
	printf("Ingrese las horas trabajadas por el trabajador: \n");
	scanf("%i", &horastrabajadasingresadas);
	printf("Ingrese la categoria del trabajador (1, 2 o 3): \n");
	scanf("%i", &categoriaingresada);
	switch (categoriaingresada) {
	case 1:
		sueldo = horastrabajadasingresadas*categoria1;
		break;
	case 2:
		sueldo = horastrabajadasingresadas*categoria2;
		break;
	default:
		sueldo = horastrabajadasingresadas*categoria3;
	}
	printf("El sueldo por trabajar %i hora\\s, un trabajador de categoria %i es de $%f.\n", horastrabajadasingresadas, categoriaingresada, sueldo);
	return 0;
}

