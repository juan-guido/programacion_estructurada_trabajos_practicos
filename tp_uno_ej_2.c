/* Este codigo ha sido generado por el modulo psexport 20230904-l64 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	float numerodos;
	float numerotres;
	float numerouno;
	float primerasuma;
	float segundasuma;
	printf("Ingrese el primer numero para ser sumado: \n");
	scanf("%f", &numerouno);
	printf("Ingrese el segundo numero para ser sumado: \n");
	scanf("%f", &numerodos);
	primerasuma = (numerouno+numerodos);
	printf("Ingrese el tercer numero para ser sumado: \n");
	scanf("%f", &numerotres);
	segundasuma = (primerasuma+numerotres);
	printf("La suma de %f mas %f mas %f es igual a %f.\n", numerouno, numerodos, numerotres, segundasuma);
	return 0;
}

