#include <stdio.h>
#include <math.h>

int main (void){
    float cateto_a, cateto_b, hipotenusa, perimetro, superficie;

    printf("Ingrese el primer cateto: ");
    scanf("%f", &cateto_a);

    printf("Ingrese el segundo cateto: ");
    scanf("%f", &cateto_b);

    hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));
    perimetro = cateto_a + cateto_b + hipotenusa;
    superficie = (cateto_a * cateto_b) / 2;

    printf("La hipotenusa es %f. \nEl perimetro es %f. \nLa superficie es %f.", hipotenusa, perimetro, superficie);

    return 0;
}